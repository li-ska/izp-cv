#include <stdio.h>
#include <stdbool.h>

int find(bool(* p)(int), int n, int a[]) {
  int k;
  for (k = 0; k<n && !(*p)(a[k]); k++);
  return k<n ? k : -1;
}

bool pli(int n) { return n % 2 == 1; }

bool pdiv9(int n) { return n % 9 ==0; }

bool pgt8(int n) { return n > 8; }

bool pdiv4gt5(int n) { return n % 4 == 0 && n > 5; }

int main(void) {
  int a[100] = {0,1,2,3,4,5,6,7,8,9};
  printf("liche: %d\n", find(pli, 10, a));
  printf("delitelne 9: %d\n", find(pdiv9, 10, a));
  printf("vetsi nez 8: %d\n", find(pgt8, 10, a));
  printf("delitelne 4 a vetsi nez 5: %d\n", find(pdiv4gt5, 10, a));
  return 0;
}
