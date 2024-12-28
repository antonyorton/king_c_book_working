// Name:     ch6-5.c
// Purpose:  sum of squares using a for loop
// Author:   A Orton

// NOTES

#include <stdio.h>

// This function sums the squares of the first n integers
int main(void) {
  int n, sum;

  // user input number of squares to sum
  printf("Input number of squares to sum: ");
  scanf("%d", &n);
  printf("Your number is: %d\n", n);

  sum = 0;
  printf("x     x^2\n", 0);  // title for table
  for (int i = 1; i <= n; i++) {
    (n - i <= 5) && printf("%-5d  %-5d\n", i, i * i);  // print the last few
    sum = sum + i * i;
  }
  printf("The sum of the first %d squares is %4d\n", n, sum);

  return 0;
}