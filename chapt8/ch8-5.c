// Name:     ch8-5.c
// Purpose:  test the sizeof() operator
// Author:   A Orton

// NOTES
// Illustrates how to calculate the length of an array a using the following:
// length(a) = sizeof(a) / sizeof(a[0])

#include <stdio.h>

#define N 422

int main(void) {
  int a[N] = {0};

  printf("sizeof(a) = %d\n", sizeof(a));
  printf("sizeof(a[0]) = %d\n", sizeof(a[0]));
  printf("Length of a = %d\n", sizeof(a) / sizeof(a[0]));

  // set the array to ones using the sizeof method for length
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    a[i] = 1;
  }

  // print first 5 elements of a
  for (int i = 0; i < 5; i++) printf("%d ", a[i]);

  return 0;
}