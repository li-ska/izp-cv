/*  Množiny  */

#include <stdio.h>
#include <stdbool.h>
#define Maxcard 100       // Maximální počet prvků jedné množiny

typedef char Elem;        // Typ prvků množiny

/* Typ množin
   invarianty: 0<=card<Maxcard, prvky elems[0]...elems[card-1] jsou různé */
typedef struct {
    int card;             // počet prvků množiny
    Elem elems[Maxcard];  // pole prvků
} Set;

/* Výpis prvků množiny
   před seznamem prvků vypíše řetězec pref */
void print_set (char* pref, Set *s) {
  printf("%s%d elements: ", pref, s->card);
  for (int i=0; i<s->card; i++) printf("%c ", s->elems[i]);
  putchar('\n');
  return;
}

/* Prázdná množina */
const Set emptyset = {0};  // emptyset.card = 0

/* Příslušnost prvku množině */
bool member_set (Elem el, Set *s) {

   /*  DOPLŇTE  */

}

/* Přidání prvku el do množiny *s
   funkce vrátí počet prvků nové množiny */
int insert_set (Elem el, Set *s)  {

   /*  DOPLŇTE  */

}

/* Průnik množin *a, *b se vloží do množiny *c
   funkce vrátí počet prvků nové množiny
   množina *c musí být různá od *a, *b  */
int intersect_set (Set *a, Set *b, Set *c) {

   /*  DOPLŇTE  */

}

/* Sjednocení množin *a, *b se vloží do množiny *c
   funkce vrátí počet prvků nové množiny
   množina *c musí být různá od *a, *b  */
int union_set (Set *a, Set *b, Set *c) {

   /*  DOPLŇTE  */

}

int main (void) {
  Set a, b, c, d;
  a = emptyset;  insert_set('a', &a);  insert_set('b', &a);
  b = a;
  insert_set('d', &b);  insert_set('e', &b);
  insert_set('f', &a);  insert_set('g', &a);

  intersect_set (&a, &b, &c);
  union_set (&a, &b, &d);

  print_set("A: ", &a);  print_set("B: ", &b);
  print_set("A intersect B: ", &c);
  print_set("A union B: ", &d);
  return 0;
}
