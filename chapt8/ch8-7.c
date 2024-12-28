// Name:     ch8-7.c
// Purpose:  2D arrays - preliminary experiments
// Author:   A Orton

// NOTES
// Initialisation off arrays
// Updating values
// Constant (immutable) arrays

#include <stdio.h>

#define N 10

int main(void) {
  double ident[N][N];

  /////////////////////////////
  // initialise the identity matrix
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      (i == j) ? (ident[i][j] = 1) : (ident[i][j] = 0);
    };
  };

  // print the identity matrix
  printf("ident = \n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%3.1f   ", ident[i][j]);
    };
    printf("\n");
  };

  /////////////////////
  // Initialise M with some values specified
  double M[3][5] = {[0][0] = -10.0, [0][1] = -1.0, [1][1] = 2.0};

  // Modify a value
  M[2][4] = 422;

  // print the matrix M
  printf("M = \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%6.1f", M[i][j]);
    };
    printf("\n");
  };

  ///////////////////
  // Define a constant array
  const double C[2][2] = {{-1.0 / 2.0, 1.0 / 2.0}, {3.0 / 4.0, -3.0 / 4.0}};

  // Modify a value (error: assignment of read-only location 'C[1][1]')
  // C[1][1] = 14.22;

  // print the matrix C
  printf("C = \n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%6.2f", C[i][j]);
    };
    printf("\n");
  };

  return 0;
}