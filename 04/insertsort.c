#include <stdio.h>

void insertsort(int n, int a[]) {

            /*  DOPLŇTE  */

  return;
}

int main(void) {
  int n; int a[100];
  printf("pocet prvku: "); scanf("%d", &n); printf("posloupnost: ");
  for (int i=0; i<n; i++) scanf("%d", &a[i]);

  printf("Original: "); for (int i=0; i<n; i++) printf(" %3d",a[i]); putchar('\n');
  insertsort(n, a);
  printf("Sorted:   "); for (int i=0; i<n; i++) printf(" %3d",a[i]); putchar('\n');
}
