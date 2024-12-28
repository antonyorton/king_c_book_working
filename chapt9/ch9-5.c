// Name:     ch9-5.c
// Purpose:  Multidimensional arrays and variable length array params
// Author:   A Orton

// NOTES

// The function sum_2d_array accepts variable size array a[n][m] since the
// sizes n and m are passes as arguments before the array.
// Note that in the definition of a, we still have to specify the number
// of columns explicitly

// Need to be very careful to avoid accidently hard coding numbers and to
// remember to use nrow and ncol instead.

#include <stdio.h>

// hard code MAX_COLS here to avoid having to do so in the function. If less
// columns are used it will not create an error for this particular
// function
#define MAX_COLS 15

int sum_2d_array(int n, int m, int a[n][m]);

int main(void) {
  int nrow, ncol;

  // note the MAX_COLS used to avoid need to hard code number of cols
  int a[][MAX_COLS] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};

  nrow = sizeof(a) / sizeof(a[0]);  // calculate the number of rows in the array
  ncol = sizeof(a[0]) / sizeof(a[0][0]);  // and number of cols (= MAX_COLS)

  printf("\nnum rows = %d\n", nrow);
  printf("num cols = %d\n", ncol);

  printf("sum of a[i][j] = %d", sum_2d_array(nrow, ncol, a));

  return 0;
}

// This function accepts a 2d array of any size
int sum_2d_array(int n, int m, int a[n][m]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}