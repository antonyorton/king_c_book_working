// Name:     ch3-2.c
// Purpose:  basic scanf testing
// Author:   A Orton

// NOTES

//  Scanf is powerful but unforgiving. It does not check user input, so methods such as returning the inputs to the user should be included for manual checking.

// It is best not to include newline (\n) and other characters in scanf. That is, try to include only %d %f or whitespace in the scanf format string.

// It seems that exponential format numbers like 1.23e12 are picked up by %f.

// Integer format numbers are risky, perhaps better to always use floats, since 4 and 4.0 are both floats for example.

#include <stdio.h>

int main(void)
{

  int i, j;
  float x, y;

  printf("Enter four numbers: ");
  scanf("%d %d %f %f", &i, &j, &x, &y);

  printf("i = %d, j = %d, x = %3.2e, y = %f\n", i, j, x, y);

  return 0;
}