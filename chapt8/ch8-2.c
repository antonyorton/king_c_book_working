// Name:     ch8-2.c
// Purpose:  reverse the order of a series of numbers
// Author:   A Orton

// NOTES

#include <stdio.h>

#define N 5

int main(void) {
  int a[N], i;

  printf("Enter %d integers (space separated): ", N);
  for (int i = 0; i < N; i++) scanf("%d", &a[i]);

  printf("The numbers in reverse order are: ");
  for (int i = N - 1; i >= 0; i--) printf(" %d", a[i]);

  return 0;
}