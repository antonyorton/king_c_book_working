// Name:     ch3ex3.c
// Purpose:  chapter 3 ex 3
// Author:   A Orton

// NOTES
// (a) equal
// (b) not equal, fails on input of "1-2 -3"
// (c) not equal, "%f " hangs until a non numeric character is entered
//     it seems to not be able to terminate on a whitespace
// (d) appear to be equal

#include <stdio.h>

int main(void)
{

  int i, j, k;
  float x, y;

  printf("Enter two floats \"f, f\": ");
  scanf("%f, %f", &x, &y);

  printf("i = %d\t", i);
  printf("j = %d\t", j);
  printf("k = %d\t", k);
  printf("x = %f\t", x);
  printf("y = %f\t", y);

  return 0;
}