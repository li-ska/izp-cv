#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} Date;

int validDate (Date d) {

            /*  DOPLŇTE  */

  return 0;
}

int main (int argc, char** argv) {
  Date date;
  int v;
  if (argc != 4) { printf("%s year month day\n", *argv); return 4; }
  date.year = atoi(argv[1]);
  date.month = atoi(argv[2]);
  date.day = atoi(argv[3]);
  printf("%04d-%02d-%02d ", date.year, date.month, date.day);
  v = validDate(date);
  switch (v) {
    case 0: printf("is valid\n"); break;
    case 1: printf("has invalid day\n"); break;
    case 2: printf("has invalid month\n"); break;
    case 3: printf("has invalid year\n");
  }
  return v;
}
