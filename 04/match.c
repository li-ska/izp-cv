#include <stdio.h>
#include <string.h>

int match(char pat[], char t[]) {

            /*  DOPLŇTE  */

}

int main (void) {
  char pattern[20], text[100]; int n;
  printf("text: "); fgets(text, 100, stdin);
  text[strcspn(text,"\n")] = '\0';
  printf("pattern: "); scanf("%20s", pattern);
  n = match(pattern, text);
  if (n == -1) { printf("No occurrence\n"); }
    else {
           printf("%s\n", text);
           for (int i=0; i<n; i++) putchar(' ');
           printf("^\n");
     //    // alternative output, one printf instead of the last three lines:
     //      printf("%.*s\033[0;31m%s\033[m%s\n",
     //          n, text, pattern, &text[n+strlen(pattern)]);
    }
  return 0;
}
