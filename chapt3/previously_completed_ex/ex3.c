#include <stdio.h>
int main(int argc, char *argv[])
{
  int i1, i2, i3;
  float x1, x2, x3;

  printf("\nChapter 3, exercise 3  ********\n\n");
  //

  // printf("Q3b Enter 1st input i-j-k (sensitive to spaces): \n");
  // scanf("%d-%d-%d", &i1, &i2, &i3);
  // printf("%5d\n", i1);
  // printf("%5d\n", i2);
  // printf("%5d\n", i3);

  // printf("Q3d Enter 2nd input i,j,k (ignores spaces for floats by the look of things): \n");
  // scanf("%f,%f,%f", &f1, &f2, &f3);
  // printf("Your input was [%.2f, %.2f, %.2f]\n", f1, f2, f3);

  printf("Q4 and Q5: Enter 3rd input f d f : \n");
  scanf("%f%d%f", &x1, &i1, &x2);
  printf("Your input was [%.2f, %d, %.2f]\n", x1, i1, x2);
  printf("Your input (again 2) was [%.2f, %d, %.2f]\n", x1, i1, x2);
  printf("\n");
  return 0;
}