// Name:     ch12-2.c
// Purpose:  Pointer to a compound literal array
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void) {
  int *p = (int[]){3, 0, 3, 4, 1};  // p points to the first element of the
                                    // array with no name

  printf("%d ", *p);
  p += 3;
  printf("%d ", *p);

  return 0;
}