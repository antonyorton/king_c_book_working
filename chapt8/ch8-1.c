// Name:     ch8-1.c
// Purpose:  my first array in c
// Author:   A Orton

// NOTES
// Basic program showing how to create an array and also how to:
// 1) set all elements to zero
// 2) read input from scanf
// 3) sum elements of an array

#include <stdio.h>

// Highly recommended to use #define for global constants so that they
// can be adjusted later
#define N 5  // Length of array, must be an integer.

int main(void) {
  float sum;
  // create an array of floats with three values set
  float a[N] = {17, [2] = 5, [4] = 5.22};

  // print array values in a column
  for (int i = 0; i < N; i++) {
    printf("a[%d] = %.2f\n", i, a[i]);
  }

  // print array values in a row, comma separated
  printf("a = ");
  for (int i = 0; i < N; i++) printf("%.2f, ", a[i]);

  // IDIOM 1: Set all elemets of a to zero
  for (int i = 0; i < N; i++) a[i] = 0;

  // print array values in a row, comma separated
  printf("\na = ");
  for (int i = 0; i < N; i++) printf("%.2f, ", a[i]);

  // IDIOM 2: Read data into a
  for (int i = 0; i < N; i++) {
    printf("Enter a value for a[%d]: ", i);
    scanf("%f", &a[i]);
  };

  // print array values in a row, comma separated
  printf("a = ");
  for (int i = 0; i < N; i++) printf("%.2f, ", a[i]);

  // IDIOM 3: Sum elements of a
  for (int i = 0; i < N; i++) {
    sum = sum + a[i];
  };
  printf("\nSum of a[i] = %.2f", sum);

  return 0;
}