// Name:     ch8-9.c
// Purpose:  Demonstrate use of variable length array
// Author:   A Orton

// NOTES

#include <stdio.h>

// #define N 5

int main(void) {
  int i, n;

  printf("How many numbers would you like to reverse? \n");
  scanf("%d", &n);

  int a[n];  // define a variable length array here based on the non-constant
  // value n. Not that VScode still flags an error or warning, so not sure if a
  // good idea to use

  printf("Enter %d integers (space separated): ", n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  printf("The numbers in reverse order are: ");
  for (int i = n - 1; i >= 0; i--) printf(" %d", a[i]);

  return 0;
}