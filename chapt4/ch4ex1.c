// Name:     ch4ex1.c
// Purpose:  chapter 4 exercise 1
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void)
{

  int i, j, k;

  i = 5;
  j = 3;
  printf("a) %d %d", i / j, i % j); // 1, 2

  i = 2;
  j = 3;
  printf("\nb) %d", (i + 10) % j); // 0

  i = 7;
  j = 8;
  k = 9;
  printf("\nc) %d", (i + 10) % k / j); // 17 % 9 / 8 = 1

  i = 1;
  j = 2;
  k = 3;
  printf("\nd) %d", (i + 5) % (j + 2) / k); // 6 % 2 / 3 = 0

  return 0;
}