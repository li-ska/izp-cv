#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define DEBUG 1
#ifdef DEBUG
#define pmsg(s,...) fprintf(stderr,__FILE__":%u: " s "\n",__LINE__,__VA_ARGS__)
#else
#define pmsg(...) {}
#endif

/* Do řetězce *st vloží na pozici k řetězec si. */
int insertStr (char *si, char **st, int k) {
  int li = strlen(si);
  int lt = strlen(*st);
  if (li == 0) return 0;     // hotovo, prázdná akce
  if (k<0 || k>lt) return 2; // chybná pozice

     /*  DOPLŇTE  */

  return 0;                  // hotovo
}

int main (void) {
  int e;
  char *st = (char *) malloc(5);
  if (st == NULL) return 1;
  strcpy(st, "abcd");

  printf("%s\n", st);
  e = insertStr("XY", &st, 1);
  if (e == 0) printf("%s\n", st);
  else fprintf(stderr, "wrong position\n");

  free(st);
  return e;
}
