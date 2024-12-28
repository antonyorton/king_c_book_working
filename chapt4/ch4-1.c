// Name:     ch4-1.c
// Purpose:  checking of UPC digits, King p57
// Author:   A Orton

// NOTES

// Learned that using %1d in scanf is a way to select just one digit from an input number

// Learned to combine a few operations into the expression for 'result'

#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
  int first_sum, second_sum, total, result;

  printf("Input first digit: ");
  scanf("%d", &i1);
  printf("Input next 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &i2, &i3, &i4, &i5, &i6);
  printf("Input last 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11);

  printf("Your number is: %1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d\n",
         i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11);

  first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  second_sum = i2 + i4 + i6 + i8 + i10;
  total = 3 * first_sum + second_sum;
  result = 9 - ((total - 1) % 10);

  printf("The check digit should be: %1d", result);

  return 0;
}