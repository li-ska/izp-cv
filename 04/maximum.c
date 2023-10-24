#include <stdio.h>
#include <stdlib.h>

int maximum (int n, int a[]) {

            /*  DOPLŇTE  */
}

int main (int argc, char** argv) {
  int n; int a[100];
  n = argc - 1;
  for (int i=0; i<n; i++) { a[i] = atoi(argv[i]); }
  printf("Maximum of %d numbers: %d\n", n, maximum(n,a));
  return 0;
}
