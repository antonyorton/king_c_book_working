// Name:     ch11-5.c
// Purpose:  Returning a pointer from a function
// Author:   A Orton

// NOTES

#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
  int i, j;
  int *my_max;
  i = -22;
  j = 14;

  my_max = max(&i, &j);
  printf("The maximum is %d", *my_max);

  printf("\nPress any key to continue..");
  scanf("%c", &i);

  return 0;
}

int *max(int *a, int *b) {
  if (*a >= *b) {
    return a;
  } else {
    return b;
  }
}