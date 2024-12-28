// Name:     ch11-3.c
// Purpose:  Pointers as arguments
// Author:   A Orton

// NOTES
// Example of pointers used to pass addresses rather than values to a function
// Note that we have been doing this with scanf("%d", &i) all along, as the
// scanf function was storing the user input to a pre-defined memory location
// represented by &i, for example.

#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void) {
  long i, *my_int = &i;
  double y, *my_frac = &y;
  double x = 3.14159;
  long j, *p = &j;  // Note that p must have an address (such as &j) provided
                    // otherwise the call to scanf below does not work

  // decompose(x, i, y);  // Error, the decompose funtion need pointers
  // for args 2 and 3. Nice that compiler picks
  // this up however

  decompose(x, my_int, my_frac);
  printf("The input number is %f\n", x);
  printf("The integer part is %d\n", i);
  printf("The fraction part is %f\n", y);

  // example using scanf with a pointer
  printf("Please input an integer:");
  scanf("%d", p);
  printf("Your integer is: %d", *p);

  return 0;
}

// Decompose a double into integer and fractional parts
void decompose(double x, long *int_part, double *frac_part) {
  // We set the values for the objects at the addresses pointed to by int_part
  // and frac_part here. This means that they will persist outside the
  // function

  *int_part = (long)x;
  *frac_part = x - (long)x;
}