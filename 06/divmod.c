#include <stdio.h>
#include <stdbool.h>

/* Spočítá celočíselný podíl dividend/divisor a uloží do quotient,
   zbytek po dělení uloží do remainder,
   vrátí logickou hodnotu (b != 0)                                 */
bool divMod (int dividend, int divisor, int* quotient, int* remainder) {

     /*  DOPLŇTE  */

}

int main(void) {   /*  testovací hodnoty jsou staticky nastaveny v polích a, b  */
  int a[5] = {-28, -23, 0, 23, 28};
  int b[5] = {-7, -3, 0, 3, 7};
  int q; int r;
  for (int i=0; i<5; i++)
    for (int j=0; j<5; j++) {
      if (divMod(a[i], b[j], &q, &r))
           printf("%3d / %2d = %3d    %3d %% %2d = %3d\n",
               a[i], b[j], q, a[i], b[j], r);
      else printf("%3d / %2d =  _|_   %3d %% %2d =  _|_\n",
               a[i], b[j], a[i], b[j]);
    }
  return 0;
}
