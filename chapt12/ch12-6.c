// Name:     ch12-6.c
// Purpose:  Pointers and mulit-dimensional arrays
// Author:   A Orton

// NOTES
// Arrays are stored row major, so if we start with int *p = &a[0] and then
// keep incrementing p, we end up going through row 1, then row 2, etc .
//
// If we want to visit elements in just one row, we can set p = &a[i][0], which
// is the same as p = a[i]. Therefore, we can also use functions defined for 1D
// arrays on individual rows of 2D arrays, by passing p = a[i] rather than
// p = a.
//
// Processing a column of a 2D array is harder, for this we have to define
// p as a pointer to an array via ... int (*p)[N]
//
// Some confusion is most evident in this program, which is related
// to understanding that if a is a 2D array, then, when used as a pointer, a
// points not to an integer, but to an array!! The type of a is not int *, but
// int (*)[NUM_COLS]. a points to the first row of a, or a[0]

#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 5

void print_array(int row, int col, int a[row][col]);
int sum_1d_array(int n, int a[n]);

int main(void) {
  // define an array
  int a[NUM_ROWS][NUM_COLS] = {
      {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}};

  printf("Original array: ");
  print_array(NUM_ROWS, NUM_COLS, a);

  // sum a row using a 1d function
  printf("Sum row 2 = %d\n", sum_1d_array(NUM_COLS, a[1]));

  // TRICKY: clear the 4th column of a using pointers
  // The brackets around *p are critical. Note declaration int(*p)[NUM_COLS].
  // (*p) means a pointer to an array whereas *p means a pointer to a single
  // object. (*p) points to a whole row
  int(*p)[NUM_COLS];
  for (p = &a[0]; p < &a[NUM_ROWS]; p++) {
    (*p)[3] = 0;
  }

  printf("Array with 4th column now zeros: ");
  print_array(NUM_ROWS, NUM_COLS, a);

  // Whilst this seems a bit error prone, I think that the C compiler treats
  // 2D arrays in the nice way where a[0] represents the first row,
  // a[1] the next etc. Let's check:
  printf("\nCheck on indexing method used by compiler");
  for (int i = 0; i < NUM_ROWS; i++) {
    printf("\n");
    // now a[i] refers to the 1d array of the ith row
    for (int *p = a[i]; p < a[i] + NUM_COLS; p++) {
      printf("%d ", *p);
    }
  }

  // Continuing, if we consider a as a pointer, then a points not to a[0][0]
  // but to a[0] ie the first row of a
  // However, when using a pointer, we have to be very specific that we are
  // now pointing to an array, not an int, via the declaration int(*p)[NUM_COLS]
  printf("\nFurther check on indexing method used by compiler");
  for (int(*p)[NUM_COLS] = a; p < a + NUM_ROWS; p++) {
    printf("\n");
    // now (*p) should represent the whole row
    for (int i = 0; i < NUM_COLS; i++) {
      printf("%d ", (*p)[i]);
    }
  }

  return 0;
}

void print_array(int row, int col, int a[row][col]) {
  for (int row = 0; row < 3; row++) {
    printf("\n");
    for (int col = 0; col < 5; col++) {
      printf("%d ", a[row][col]);
    }
  }
}

int sum_1d_array(int n, int a[n]) {
  int sum;
  for (int *p = a; p < a + n; p++) {
    sum += *p;
  }
  return sum;
}
