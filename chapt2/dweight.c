// Name:     dweight.c
// Purpose:  compute dimensional weight of a box, see King p20
// Author:   A Orton

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{

  int height, length, width, volume, weight;

  printf("Input height of box: ");
  scanf("%i", &height);

  printf("Input length of box: ");
  scanf("%i", &length);

  printf("Input width of box: ");
  scanf("%i", &width);

  volume = height * length * width;
  weight = volume / INCHES_PER_POUND + 1;

  printf("Dimensions: %i x  %i x %i \n", height, length, width);
  printf("Volume: %i\n", volume);
  printf("Dimensional weight: %i\n", weight);

  return 0;
}