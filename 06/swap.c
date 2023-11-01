#include <stdio.h>

/* Vymění hodnoty v proměnných p, q.
   Argumenty se předávají odkazem */
void swap   /*  DOPLŇTE  */

int main (void) {
  float a = 2.0, b = 3.0;  // testovací hodnoty
  printf("Before:  a = %5.1f,  b = %5.1f\n", a, b);
  swap /* DOPLŇTE */ ;
  printf("After:   a = %5.1f,  b = %5.1f\n", a, b);
}
