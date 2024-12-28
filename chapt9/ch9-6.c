// Name:     ch9-6.c
// Purpose:  Initialising arrays at function call time
// Author:   A Orton

// NOTES
// This shows how we can define the array within the function call
// Although the gotcha is that we have to make sure the length parameter
// is also correct.

#include <stdio.h>

int sum_array(int a[], int n);

int main(void) {
  int total;

  total =
      sum_array((int[]){1, 2, 3, 4, 5}, 5);  // Note array is initialised here
  printf("The length of the array is %d\n", total);

  // Case where the array is defined based on variables i and j
  // although an easy mistake is to give an incorrect length parameter
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      total = sum_array((int[]){i, i + j, i * j}, 3);
      printf("The length of the array is %d\n", total);
    }
  }

  return 0;
}

// To do it correctly, we need to supply the array's length as an argument
int sum_array(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}