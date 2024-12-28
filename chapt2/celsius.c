// Name:     celsius.c
// Purpose:  convert farenheight temp to celsius
// Author:   A Orton

#include <stdio.h>

#define FREEZING_PT 32
#define SCALE_FACTOR 5.0f / 9.0f

int main(void)
{

  float farenheight, celsius;

  printf("Enter a farenheight temperature: ");
  scanf("%f", &farenheight);

  celsius = SCALE_FACTOR * (farenheight - FREEZING_PT);

  printf("The temperature in celsius is: %.1f\n", celsius);

  return 0;
}