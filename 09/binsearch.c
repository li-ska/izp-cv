#include <stdio.h>
#include <stdlib.h>

// Naplnění a[0],...,a[n-1] náhodnou rostoucí posloupností
void initarray (int a[], int n) {
  int p;
  if (n>0) a[0] = p = abs(rand())%10;
  for (int i = 0; i < n; i++) {
    a[i] = p += abs(rand())%5 + 1;
  }
  return;
}

// Výpis pole
void printarr (int a[], int n) {
  for (int i=0; i<n; i++) printf("%3d ", a[i]);
  putchar('\n');
  return;
}

// Zobrazení pozice v poli
void printpos (int k) {
  if (k == -1) printf("NENALEZENO\n");
    else   printf("  %*s^\n", 4*k, "");
  return;
}

// Vyhledání čísla s v rostoucí posloupnosti a[l],...,a[r]
// binsearch(a,l,r,s) je index prvku s v poli a, pokud tam prvek je,
// binsearch(a,l,r,s) == -1, pokud prvek s v poli a není
int binsearch (int a[], int l, int r, int s) {
  int m; // index ve středu prohledávaného úseku

  /*  DOPLŇTE kód využívající rekurzivní volání binsearch  */

}


int main (void) {
  const int n = 20;
  int arr[n];
  int p;
  initarray(arr, n);
  printarr(arr, n);
  do { scanf("%d", &p);
       printarr(arr, n);
       printpos (binsearch(arr, 0, n-1, p));
  } while (p > 0);
  return 0;
}
