// Name:     ch9-1.c
// Purpose:  Computing averages with a function
// Author:   A Orton

// NOTES
// Note that the function has a type and its parameters must also each
// have types.
// Functions can be written below the main() only if there is a 'declaration'
// of the function above main() which specifies the functions type and the
// types and number of its input paramaters.

#include <stdio.h>

double average(double a, double b);  // 'declaration' of the double() function

int main(void) {
  double x, y, z;

  printf("Enter three numbers:");
  scanf("%lf%lf%lf", &x, &y, &z);

  printf("Your numbers are: %.3f %.3f %.3f\n", x, y, z);

  printf("Average of %.3f and %.3f = %.3f\n", x, y, average(x, y));
  printf("Average of %.3f and %.3f = %.3f\n", x, z, average(x, z));
  printf("Average of %.3f and %.3f = %.3f\n", y, z, average(y, z));

  average(x, y);  // does nothing, return value is discarded

  return 0;
}

// actual definition of the double() function
double average(double a, double b) { return (a + b) / 2; }