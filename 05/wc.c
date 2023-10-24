#include <stdio.h>
#include <stdbool.h>

int main (int argc, char* argv[]) {
  FILE *file;
  char** filename;
  bool nonterminatedlastline;
  int nchars = 0, nlines = 0;
  char prevchar = EOF, c;
  if (argc != 2) { fprintf(stderr, "%s filepath\n", *argv); return 1; }
  filename = &argv[1];
  file = fopen(*filename, "r");
  if (file == NULL)
    { fprintf(stderr, "File %s is inaccessible\n", *argv); return 2; }
  for (;;) {
    c = fgetc(file);
    if (c == EOF) break;
    nchars++;
    if (c == '\n') nlines++;
    prevchar = c;
  }
  nonterminatedlastline = prevchar != EOF && prevchar != '\n';
  if (nonterminatedlastline) nlines++;
  printf("%s: %d lines, %d characters\n", *filename, nlines, nchars);
  if (nonterminatedlastline) printf("The last line is not terminated by \\n\n");
  fclose(file);
  return 0;
}
