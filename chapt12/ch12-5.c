// Name:     ch12-5.c
// Purpose:  Reverse an array of numbers using pointers
// Author:   A Orton

// NOTES

#include <stdio.h>

#define N 5

int main(void) {
  int a[N];

  printf("Enter %d integers: ", N);

  // read numbers into array using pointer to a
  for (int *p = a; p < a + N; p++) {
    scanf("%d", p);  // remember that scanf takes a pointer as arguement
  }

  printf("The values in reverse are: \n");
  for (int *p = a + N - 1; p >= a; p--) {
    printf("%d ", *p);
  }

  return 0;
}