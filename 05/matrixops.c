#include <stdio.h>

/* vypíše matici po řádcích na stdout */
void printmat (int m, int n, int a[m][n]) {
  int i, j;
  for (i=0; i<m; i++) {
    for (j=0; j<n; j++) printf("%4d", a[i][j]);
    putchar('\n');
  }
  return;
}

/* vytvoří jednotkovou matici řádu n */
void unit (int n, int a[n][n]) {

            /*  DOPLŇTE  */

  return;
}

/* transponuje čtvercovou matici na místě */
void transpose (int n, int a[n][n]) {

            /*  DOPLŇTE  */

  return;
}

/* součet dvou matic stejného typu uloží do třetí matice */
void add (int m, int n, int a[m][n], int b[m][n], int c[m][n]) {

            /*  DOPLŇTE  */

  return;
}

/* součin matic a[m][n] * b[n][p] uloží do c[n][p] */
void multiply (int m, int n, int p, int a[m][n], int b[n][p], int c[n][p]) {
  int i, j, k; int s;
  for (i=0; i<m; i++)
    for (k=0; k<p; k++) {
      s = 0;
      for (j=0; j<n; j++) s += a[i][j] * b[j][k];
      c[i][k] = s;
    }
  return;
}

int main (void) {
  int mat1[4][4] = {0};
  int mat2[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
  int mat3a[2][3] = {{3,5,6}, {7,4,8}};
  int mat3c[2][3] = {0};
  int mat4a[2][3] = {{2,1,2}, {1,3,0}};
  int mat4b[3][4] = {{2,3,2,3}, {1,2,1,1}, {1,0,0,1}};
  int mat4c[2][4];

  printmat(4, 4, mat1);  putchar('\n');
  unit(4, mat1);
  printmat(4, 4, mat1);  putchar('\n');

  printmat(4, 4, mat2);  putchar('\n');
  transpose(4, mat2);
  printmat(4, 4, mat2);  putchar('\n');

  printmat(2, 3, mat3a);  putchar('\n');
  printmat(2, 3, mat4a);  putchar('\n');
  add(2, 3, mat3a, mat4a, mat3c);
  printmat(2, 3, mat3c);  putchar('\n');

  printmat(2, 3, mat4a);  putchar('\n');
  printmat(3, 4, mat4b);  putchar('\n');
  multiply(2, 3, 4, mat4a, mat4b, mat4c);
  printmat(2, 4, mat4c);  putchar('\n');

  return 0;
}
