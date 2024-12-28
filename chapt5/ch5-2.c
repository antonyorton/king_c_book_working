// Name:     ch5-2.c
// Purpose:  Example of a cascaded if statement
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void)
{
  int i;

  printf("Input a number: ");
  scanf("%d", &i);

  printf("Your number is %d\n", i);

  if (3 * (i / 3) == i)
  {
    printf("Your number is divisible by 3");
  }
  else if (2 * (i / 2) == i)
  {
    printf("Your number is divisible by 2");
  }
  else
  {
    printf("Your number is not divisible by 2 or 3");
  }

  return 0;
}