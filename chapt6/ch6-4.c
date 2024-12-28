// Name:     ch6-4.c
// Purpose:  basic for loops
// Author:   A Orton

// NOTES
// Note that we declare the control variable i within the for statement.
// Eg. for (int i = 1; ... ). This is most helpful, as we don't need to think
// about declaring the for loop control variables at the start of the program.

#include <stdio.h>

// This function shows the sytax for two basic for loops
int main(void) {
  int n;

  // User input length of for loop
  printf("Input a number: ");
  scanf("%d", &n);
  printf("Your number is: %d\n", n);

  // Incrementing for loop
  printf("Counting up from 0 to n - 1:\n");
  for (int i = 0; i < n; i++) {
    printf("%d, ", i);
  }

  // Decrementing for loop
  printf("\nCounting down from n - 1 to 0:\n");
  for (int i = n - 1; i >= 0; i--) {
    printf("%d, ", i);
  }

  return 0;
}