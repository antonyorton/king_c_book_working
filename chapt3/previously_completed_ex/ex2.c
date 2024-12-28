#include <stdio.h>

int main(void)
{
  printf("\nChapter 3, exercise 2  ********\n\n");
  printf("(a) |%-8.1e|  scientific\n", 17.2);
  printf("(b) |%8.6e|  scientific\n", 17.2);
  printf("(c) |%-8.2f|  fixed point float\n", 17.2);
  printf("(d) |%6.f|  fixed point float\n", 17.2);

  printf("\n");
  return 0;
}