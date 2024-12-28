// Name:     ch12-3.c
// Purpose:  Processing arrays with pointers
// Author:   A Orton

// NOTES

#include <stdio.h>

#define N 8

int main(void) {
  int a[N] = {1, 2, 5, -3, 6};
  int sum = 0;
  int *p;

  // We sum over the array here via a pointer starting from &a[0]
  // and going up to &a[N-1]
  for (p = &a[0]; p < &a[N]; p++) {
    sum += *p;
    printf("Sum = %d\n", sum);
  }

  sum = 0;
  // Alternatively, if we want to get tricky (apparently C programmers
  // like to get tricky), we can use *p++ which will provide the value of
  // *p and then afterwards increment it.
  p = &a[0];
  while (p < &a[N]) {
    sum += *p++;  // ooh look at me... but why
    printf("Sum2 = %d\n", sum);
  }

  sum = 0;
  // for reference here is the same sum done via normal subscripting
  for (int i = 0; i < N; i++) {
    sum += a[i];
    printf("Sum3 = %d\n", sum);
  }

  return 0;
}