// Name:     ch11-4.c
// Purpose:  Find the largest and smallest elements of an array
// Author:   A Orton

// NOTES
// If we are just passing the pointers to a function, we do not need
// to declare both the item and the pointer (eg int max, *p = &max).
// We can just declare the item (max) and pass its pointer (&max) to
// the function without declaring it
//
// Note also that if we do not wish for the function to modify the
// oject a pointer p points to, we can specify this in the function
// definition as by specifying const before the
// pointer parameter, for example void f(const int *p)

#include <stdio.h>

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int a[] = {3, 4, 2, 11, -44};
  int n = sizeof(a) / sizeof(a[0]);

  int max, min;

  max_min(a, n, &max, &min);

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\nThe maximum is %d", max);
  printf("\nThe minimum is %d", min);

  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  *max = a[0];
  *min = a[0];

  for (int i = 0; i < n; i++) {
    if (a[i] > *max) {
      *max = a[i];
    }
    if (a[i] < *min) {
      *min = a[i];
    }
  }
}