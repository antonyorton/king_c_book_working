// Name:     ch7-1.c
// Purpose:  Testing of type conversion
// Author:   A Orton

// NOTES
// Some tests on how integer and float conversion works in equations.
// There is a risk of accidental equations of the form (a/b) being cast
// incorrectly to integers.

#include <stdio.h>

int main(void) {
  int i, j;
  float x, y;

  i = 11;
  j = 3;
  x = 2.0;
  // since its type is declared, x will be a float even if entered as 2
  // rather than 2.0

  y = i / x * j;  // should be 5.5 * 3 = 16.5 (works since x is a float)
  printf("%f\n", y);

  y = i / 2 * j;  // will be 15
  printf("%f\n", y);

  y = (i + x) / j;  // should be 4.333 (works since x is a float)
  printf("%f\n", y);

  y = (i / j) + x;  // will be 5.0 since (i / j) will be an int
  printf("%f\n", y);

  y = ((float)i / j) + x;  // will be 5.66
  printf("%f\n", y);

  printf(
      "It appears that if one float is in an equation block containing integers"
      " and floats,\nthe result will be cast into a float");

  return 0;
}