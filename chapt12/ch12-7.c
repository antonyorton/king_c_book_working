// Name:     ch12-7.c
// Purpose:  Flattening a 2D array
// Author:   A Orton

// NOTES

#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 5

int main(void) {
  int a[NUM_ROWS][NUM_COLS] = {
      {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}};

  // Considered as a pointer, a[0] points to the first element of a[0],
  // which is the first element (a[0][0]) of the first row (a[0]) of a.
  // When incremented from 1 to NUM_ROWS * NUM_COLS - 1, the pointer will
  // then pass over every element of the array and so we can obtain the
  // flattened array. This is nice.

  printf("The flattened array is: \n");
  for (int *p = a[0]; p < a[0] + NUM_ROWS * NUM_COLS; p++) {
    printf("%d ", *p);
  }

  return 0;
}