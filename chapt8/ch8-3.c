// Name:     ch8-3.c
// Purpose:  Examples of array initialisation
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void) {
  int a[10] = {1, 2, 3, 4};  // specify some values, the rest to be zero

  int b[10] = {0};  // initialise to all zeros

  int c[] = {1, 2, 3, 4, 5, 6};  // let the size of the array be inferred
                                 // from the initial values

  int d[15] = {[3] = 22, [7] = 422};  // designated values at some indices only

  printf("a = ");
  for (int i = 0; i < 10; i++) printf("%d ", a[i]);
  printf("\n");

  printf("b = ");
  for (int i = 0; i < 10; i++) printf("%d ", b[i]);
  printf("\n");

  printf("c = ");
  for (int i = 0; i < 6; i++) printf("%d ", c[i]);
  printf("\n");

  printf("d = ");
  for (int i = 0; i < 15; i++) printf("%d ", d[i]);
  printf("\n");

  return 0;
}