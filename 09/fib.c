#include <stdio.h>

typedef unsigned int ui;
typedef unsigned long int uli;

// Naivně zapsaná funkce fib, exponenciální složitost
uli fib_exp (ui n) {
  // return ... ; // Napište podle definice, s použitím podmíněného výrazu
}


// Iterativně definovaná funkce fib
uli fib_it1 (ui n) {
  uli a=0, b=1;
  while (n--) { b += a; a = b-a; }
  return a;
}

// Jiná iterativní definice
uli fib_it2 (ui n) {
  uli a=0, b=1;
  for (;;) {
    if (!n--) return a;
    a += b;
    if (!n--) return b;
    b += a;
  }
}

/*
// Rekursivně definovaná funkce fib
uli f (uli a, uli b, ui n) {
  // Doplňte pomocnou funkci f
  // Jeden řádek: return (n ? ... : ...);
}

uli fib_r (ui n) { return f(0, 1, n); }
*/


int main (void) {
  ui n;
  for (;;) {
    printf("n="); scanf("%d", &n);
    if (n>93) break;
    printf("fib(%u) = %lu\n", n, fib_exp(n));
  }

  // Tabulka fib(0) až fib(93)
  // fib(93) < 2^64;  fib(94) se do unsigned long už nevejde
  /*
  printf(" n |  fib(n) |\n"
         "---+----------------------+\n");
  for (ui n=0; n<94; n++)
    printf("%2u | %20lu |\n", n, fib_r(n));
  */
  return 0;
}
