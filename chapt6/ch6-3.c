// Name:     ch6-3.c
// Purpose:  sum a series of numbers using a while loop
// Author:   A Orton

// NOTES

#include <stdio.h>

// This function sums a series of user input floats
int main(void) {
  float x, sum;
  printf("Sum a series of decimals\n");

  sum = 0;
  x = 1;

  while (x != 0) {
    printf("Input a number, (0 to terminate): ");
    scanf("%f", &x);
    printf("The sum is: %4.3f\n", sum + x);
    sum = sum + x;
  }

  printf("Program terminated. Final sum = %4.3f\n", sum);

  return 0;
}