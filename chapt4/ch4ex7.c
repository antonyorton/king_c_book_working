// Name:     ch4ex7.c
// Purpose:  check on negative remainders
// Author:   A Orton

// NOTES
// The two results are not the same for total = 10

#include <stdio.h>

int main(void)
{

  int total;

  printf("Please input total: ");
  scanf("%d", &total);

  printf("\nResult 1 = %d", 9 - (total - 1) % 10);
  printf("\nResults 2 = %d", 10 - (total) % 10);

  return 0;
}