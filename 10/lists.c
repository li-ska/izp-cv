#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {               // Typ prvků seznamu
    unsigned int id;
    char *name;
} Object;

typedef struct node ListNode;  // Typ seznamových uzlů
typedef ListNode* List;        // Typ seznamů
struct node {                  // Typ seznamových uzlů
    Object *data;
    List next;
};

const List listNil = NULL;     // prázdný seznam

// Přidá prvek *px na začátek seznamu *s, tím změní s
// Pro přidaný uzel alokuje paměť
List listCons (Object *px, List *s) {
  List ln = malloc(sizeof(ListNode));
  if (ln != NULL) {
    ln->data = px;
    ln->next = *s;
  }
  *s = ln;
  return ln;
}

// Vrátí ukazatel na první prvek neprázdného seznamu, anebo NULL
Object *listHead (List s) {

  /*  DOPLŇTE  */

}

// Vrátí zbytek neprázdného seznamu (tím změní s), anebo NULL
// Přitom dealokuje paměť prvnímu uzlu (ztrácí se tím odkaz na prvek)
List listTail (List s) {

  /*  DOPLŇTE  */

}

// Zruší celý seznam a uvolní paměť
// Ruší jen seznamové uzly, nikoliv data
void listFree (List s) {
  while (s != NULL)  s = listTail(s);
  return;
}

// Test na prázdnost seznamu
bool listNull (List s) {

  /*  DOPLŇTE  */

}

// Počet prvků seznamu
unsigned int listLength (List s) {

  /*  DOPLŇTE  */

}

// Obrácení seznamu
// Podle seznamu s vytvoří nový seznam, v němž budou stejné prvky jako v s,
// ale v opačném pořadí
List listReverse (List s) {

  /*  DOPLŇTE  */
  /*  můžete využít funkce listCons  */

}

// Výpis prvků seznamu
void listPrint (List s) {
  printf("[");
  if (s==NULL) { printf("]\n"); return; }
  printf("(%u,%s)", s->data->id, s->data->name);
  s = s->next;
  while (s != NULL) {
    printf(", (%u,%s)", s->data->id, s->data->name);
    s = s->next;
  }
  printf("]\n");
  return;
}

int main (void) {
  Object a = {.id=1, .name="a"};
  Object b = {.id=2, .name="b"};
  Object c = {.id=3, .name="c"};
  List r;

  // Zakomentujte řádky používající dosud nedefinované funkce
  List ps = NULL;
  printf("length %u (%sempty)\n", listLength(ps), listNull(ps)?"":"non");
  listPrint(ps);
  r = listReverse(ps); listPrint(r); putchar('\n');
  listFree(r);

  listCons(&c, &ps);
  printf("length %u (%sempty)\n", listLength(ps), listNull(ps)?"":"non");
  listPrint(ps);
  r = listReverse(ps); listPrint(r); putchar('\n');
  listFree(r);

  listCons(&b, &ps);
  printf("length %u (%sempty)\n", listLength(ps), listNull(ps)?"":"non");
  listPrint(ps);
  r = listReverse(ps); listPrint(r); putchar('\n');
  listFree(r);

  listCons(&a, &ps);
  printf("length %u (%sempty)\n", listLength(ps), listNull(ps)?"":"non");
  listPrint(ps);
  r = listReverse(ps); listPrint(r);
  listFree(r);

  listFree(ps);
  return 0;
}
