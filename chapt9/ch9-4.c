// Name:     ch9-4.c
// Purpose:  Functions with array arguements
// Author:   A Orton

// NOTES
// There are some strange points about passing arrays to functions.
// 1) The length of the array cannot be calculated from within the function,
//    and must be passed as an arguement. An error will result if we pass
//    a length larger than the actual array length
// 2) The function can change values of the array which then persist
//    outside the function scope

#include <stdio.h>

// int f_wrong(int a[]);

int sum_array(int a[], int n);

int main(void) {
  int length;
  int a[5] = {1, 2, 3, 4, 5};
  length = sizeof(a) / sizeof(a[0]);

  // printf("The length of a is %d\n", f_wrong(a));

  printf("Initial values of a: ");
  for (int i = 0; i < length; i++) printf("%d ", a[i]);

  printf("\nThe sum of the a[i] is %d\n", sum_array(a, length));

  printf("Current values of a: ");
  for (int i = 0; i < length; i++) printf("%d ", a[i]);
  return 0;
}

// This function, which tries to calculate the length of a[] gives an
// incorrect result
// int f_wrong(int a[]) {
//   int len = sizeof(a) / sizeof(a[0]);
//   return len;
// }

// To do it correctly, we need to supply the array's length as an argument
int sum_array(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    a[i] = -99 + i;  // the function can change values of the array which will
                     // then persist beyond the function scope
  }
  return sum;
}