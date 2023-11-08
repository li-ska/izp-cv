#include <stdio.h>

typedef int T;

void map (T (*f)(T), int n, T a[]) {
  /*  Doplňte (1 řádek)  */
  return;
}

int square (int n) { return n*n; }

int main (void) {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i;
  for (i=0; i<10; i++) printf(" %4d", arr[i]);
  putchar('\n');

  map( ...... );  /*  Doplňte volání map  */

  for (i=0; i<10; i++) printf(" %4d", arr[i]);
  putchar('\n');
  return 0;
}
