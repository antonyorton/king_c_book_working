// Name:     ch4ex2.c
// Purpose:  truncation of negative fractions
// Author:   A Orton

// NOTES

// If compiler always truncates toward zero in C99,
//    then -(i/j) = (-i)/j
// since if i = aj + b, then -i = -aj - b

#include <stdio.h>

int main(void)
{

  int i, j;

  i = 6;
  j = 5;

  printf("i = %d, j = %d, - ( i / j ) = %d", i, j, -i / j);
  printf("\ni = %d, j = %d, (-i) / j = %d", i, j, (-i) / j);

  return 0;
}