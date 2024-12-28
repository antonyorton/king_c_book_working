// Name:     ch3-1.c
// Purpose:  a quick check on conversion string
// Author:   A Orton

#include <stdio.h>

int main(void)
{

  int i, j;
  float x, y;

  i = 10;
  j = 20;
  x = 3.2892f;
  y = 5527.0f;

  printf("i = %-10.5d, j = %d, x = %10.4g, y = %f\n", i, j, x, y);
  // very important not to use %d with a float, or %f with an int as
  // these will produce meaningless results

  return 0;
}