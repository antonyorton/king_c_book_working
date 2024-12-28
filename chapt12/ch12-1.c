// Name:     ch12-1.c
// Purpose:  Arrays and pointer arithmetic
// Author:   A Orton

// NOTES
// A pointer can be provided to an element of an array
// The following three operations are allowed:
// 1. Add an integer to a pointer (it goes to next array element)
// 2. Subtract an integer from a pointer
// 3. Subtract one pointer from another

#include <stdio.h>

void print_array(int n, int a[n]);

int main(void) {
  int a[10] = {0};
  int i;
  int *p, *q;

  p = &a[2];  // p points to a[2]
  *p = 5;     // set a[2] = 5

  q = p + 3;  // q points to a[2 + 3]
  *q = 7;     // set a[5] = 7

  p += 6;  // p points to a[2 + 6]
  *p = 2;  // set a[8] = 2

  p = q - 2;  // p points to a[5 - 2]
  *p = 42;    // set a[3] = 42

  print_array(10, a);

  printf("\n%d", q - p);  // prints 5 - 3 = 2

  printf("\n%d", (p <= q));  // compare pointers via a less than or equal
                             // relationship

  return 0;
}

void print_array(int n, int a[n]) {
  for (size_t i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}