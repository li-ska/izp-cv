#include <stdio.h>
#include <stdlib.h>

char caesarShift (int n, char c) {

     /*  DOPLŇTE posun velkých písmen, posun malých písmen  */
}

int main(int argc, char* argv[]) {
  int n;
  char c;
  if (argc != 2) { fprintf(stderr, "%s SHIFT\n", argv[0]); return 1; }
  n = atoi(argv[1]);
  while ((c=getchar()) != EOF) { putchar(caesarShift(n,c)); }
  return 0;
}
