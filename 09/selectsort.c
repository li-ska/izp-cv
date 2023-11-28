#include <stdio.h>

typedef struct {
    unsigned int rec_id;  // klíč pro řazení
    char rec_data;        // příklad dat v záznamu
} Rec;                    // typ záznamu


// Řadíme vzestupně pole záznamů  a[0],...,a[n-1]  podle jejich klíčů a[i].rec_id 
void selectSort (Rec a[], int n) {
  if (n<2) return;   // jednoprková posloupnost je už seřazená
  int maxindex = n-1;  Rec maxrec = a[maxindex];
  for (int i = 0; i < n-1; i++) {          // nalezení záznamu s největším klíčem
    if (a[i].rec_id < maxrec.rec_id) continue;
    maxindex = i;  maxrec = a[i];
  }

  /*  VYMĚŇTE největší prvek pole s posledním  */

  /*  DOKONČETE řazení, použijte rekurzivní volání selectSort  */

  return;
}

void printarr (Rec a[], int n) {
  for (int i = 0; i<n; i++) printf("(%d, %c)  ", a[i].rec_id, a[i].rec_data);
  putchar('\n');
  return;
}

int main (void) {
  const int n = 8;
  Rec a[8] = { {5,'E'}, {7,'G'}, {2,'B'}, {6,'F'}, {1,'A'}, {8,'H'}, {4,'D'}, {3,'C'} };
  printarr(a, n);   // původní pole záznamů
  selectSort(a, n); // řazení
  printarr(a, n);   // seřazené pole záznamů
  return 0;
}
