// Name:     ch12-4.c
// Purpose:  Using an array's name as a pointer
// Author:   A Orton

// NOTES

#include <stdio.h>

#define N 8

int main(void) {
  int a[N] = {1, 2, 5, -3, 6};
  int sum = 0;

  // Note how here we set int *p = a  (which means the same as p = &a[0])
  // and more generally (a + i) = &a[i]
  for (int *p = a; p < a + N; p++) {
    printf("%d ", *p);
  }

  return 0;
}