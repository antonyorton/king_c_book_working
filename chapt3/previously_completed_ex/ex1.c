#include <stdio.h>

int main(void)
{
  printf("\nChapter 3, exercise 1  ********\n\n");
  printf("(a)  |%6d,%5d|   integers\n", 86, 1040);
  printf("(b)  |%12.3e|   scientific exponetial notation\n", 30.253);
  printf("(c)  |%-12.4f|   numbers after the .\n", 83.f);
  printf("(d)  |%-13.6g|    significant figs\n", .00000009876543);

  printf("\n");
  return 0;
}