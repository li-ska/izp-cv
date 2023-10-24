#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} Date;

int cmpDate (Date d1, Date d2) {

            /*  DOPLŇTE  */
}

int main (int argc, char** argv) {
  Date d1, d2;
  int v;
  if (argc != 7) { printf("%s y1 m1 d1 y2 m2 d2\n", *argv); return 1; }
  d1.year = atoi(argv[1]);
  d1.month = atoi(argv[2]);
  d1.day = atoi(argv[3]);
  d2.year = atoi(argv[4]);
  d2.month = atoi(argv[5]);
  d2.day = atoi(argv[6]);
  v = cmpDate(d1, d2);
  if (v == -1) printf("First date is earlier.\n");
    else if (v == 1) printf("Second date is earlier.\n");
    else printf("Same dates.\n");
  return 0;
}
