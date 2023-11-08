#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Typ konfiguračního záznamu
typedef struct {
  char filename[50];
  int fromline;
  int toline;
} Config;

// Konfigurační záznam, nastavení implicitních hodnot
Config config = {.filename="", .fromline=1, .toline=INT_MAX};

// Analyzuje příkazový řádek a naplní záznam *conf
int parsecmdline (int argc, char **argv, Config *conf) {
  //  ...  DOPLŇTE potřebné deklarace

  for (int iarg=1; iarg<argc; iarg++) {
    if (strcmp(argv[iarg], "-f") == 0) {
          // ... ... ...  DOPLŇTE kód pro volbu -f
    } else if (strcmp(argv[iarg], "-t") == 0) {
          // ... ... ...  DOPLŇTE kód pro volbu -t
    } else if (strcmp(argv[iarg], "-s") == 0) {
          // ... ... ...  DOPLŇTE kód pro volbu -s
    } else return 4;  // Error: Neznámá volba
  }
  return 0;
}

// Vypíše hlášku na stderr a vrátí svůj argument
int errmsg (int e) {
  // Syntax příkazového řádku:
  static const char *usage =
      "Syntax:\t./range  [-f START_LINE]  [-t END_LINE]  [-s FILENAME]";
  if (e != 0) fprintf(stderr, "Error %d\n%s\n", e, usage);
  return e;
}

// Program spuštěný
//  ./range  -f M  -t N  -s FILENAME
// vypíše soubor FILENAME od m-tého po n-tý řádek, kde
// m = max 1 M
// n = min lines N
// lines = počet řádků souboru FILENAME
int main (int argc, char **argv) {
  FILE *input;
  char c;
  int exitcode = parsecmdline(argc, argv, &config);
  if (exitcode != 0) return errmsg(exitcode);

  // kontrolní výpis konfigurace
  /*
  printf("filename: \"%s\"\nfromline: %3d\ntoline:   %3d\n",
      config.filename, config.fromline, config.toline);
  */

  // nastavení vstupu
  if (*config.filename != '\0') {
    input = fopen(config.filename, "r");
    if (input == NULL) return errmsg(6);  // Err: Neexistující vstup
  } else input = stdin;

  // čtení vstupu a výpis znaků na zvolených řádcích
  int linenumber = 1;
  while ((c=fgetc(input)) != EOF) {
    if (linenumber >= config.fromline && linenumber <= config.toline) putchar(c);
    if (c == '\n') linenumber++;
  }

  return 0;
}
