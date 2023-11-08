#include <stdio.h>
#include <stdlib.h>

// Typ vektoru: velikost (dimenze) a položky (souřadnice)
typedef struct {
    unsigned dimen;   // počet položek
    double coords[];  // položky
} Vector;

// Výpis vektoru (jeho souřadnic)
void printvect (Vector *v) {
  if (v == NULL) return;
  putchar('[');
  if (v->dimen > 0) {
      printf("%.2f", v->coords[0]);
      for (unsigned i = 1; i < v->dimen; i++)
          printf(", %.2f", v->coords[i]);
  }
  printf("]\n");
  return;
}

// Konstruktor vektoru alokuje paměť velikosti dim pro nový vektor
Vector *constr_vec (unsigned dim) {
  /*  DOPLŇTE volání malloc se správnou velikostí v bytech  */
  /*  DOPLŇTE nastavení .dimen, pokud malloc dopadl dobře  */
}

// Destruktor uvolní paměť
void destr_vec (Vector *v) {
  /*  DOPLŇTE  */
}

// Součet dvou vektorů
int add_vec (Vector *v1, Vector *v2, Vector *v3) {
  if (v1 == NULL || v2 == NULL || v3 == NULL) return 9;           // Err: nezadány
  if (v1->dimen != v2->dimen || v2->dimen != v3->dimen) return 1; // Err: nekompat.

  /*  DOPLŇTE sčítání  */

  return 0;
}

int main (void) {
  Vector *u, *v, *w;
  /*  DOPLŇTE:
       trojí volání konstruktoru na tři dvourozměrné vektory u, v, w
       test úspěšného výsledku konstrukce
       inicializaci vektorů u, v (nastavení u->coords[0] ... v->coords[1]
       volání add_vec pro sčítance u, v a výsledný vektor w
       test úspěšné kontroly dimenzí a sečtení
       volání printvect(w)
       trojí volání destruktoru
  */
  return 0;
}
