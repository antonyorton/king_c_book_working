// Name:     addfrac.c
// Purpose:  Adds two fractions
// Author:   A Orton

// NOTES
// Final fraction result is not reduced to lowest terms

#include <stdio.h>

int main(void)
{

  int num1, num2, denom1, denom2, numRes, denomRes;

  printf("  Enter first fraction in format i1/i2 : ");
  scanf("%d / %d", &num1, &denom1);

  printf("  Enter second fraction in format i1/i2 : ");
  scanf("%d / %d", &num2, &denom2);

  printf("  The first fraction was %d/%d, ", num1, denom1);
  printf("and the second fraction was %d/%d\n", num2, denom2);

  numRes = num1 * denom2 + num2 * denom1;
  denomRes = denom1 * denom2;

  printf("  .. The sum is %d/%d", numRes, denomRes);

  return 0;
}