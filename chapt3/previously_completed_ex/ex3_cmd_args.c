#include <stdio.h>
int main(int argc, char *argv[])
{
  int i1, i2, i3;

  printf("\nChapter 3, exercise 3  ********\n\n");
  // Your c code goes here
  //  ...
  printf("You have entered %d arguments:\n", argc - 1);
  printf("Your first three are: \n");
  for (int i = 1; i < 4; i++)
  {
    printf("%s\n", argv[i]);
  }

  printf("\n");
  return 0;
}