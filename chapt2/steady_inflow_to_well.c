// Calculate the area and equivalent area radius
// given user inputs: length, width

#include <stdio.h>
#include <math.h>
#include <conio.h> // for getch()

#define PI 3.14159

int main(void)
{
  float length, width, area, radius, gw_level, bulk_exc_level, radius_of_influence, H, h, inflow_on_k, k;

  printf("Enter length: ");
  scanf("%f", &length);

  printf("Enter width: ");
  scanf("%f", &width);

  printf("Enter groundwater level: ");
  scanf("%f", &gw_level);

  printf("Enter bulk excavation level: ");
  scanf("%f", &bulk_exc_level);

  printf("Enter radius of influence R: ");
  scanf("%f", &radius_of_influence);

  // calculate area and radius
  area = length * width;
  radius = sqrt(area / PI);

  // calculate H and h
  H = gw_level - bulk_exc_level + 2 * radius;
  h = H - (gw_level - bulk_exc_level);

  // calculate inflow/k
  inflow_on_k = PI * (H * H - h * h) / log(radius_of_influence / radius);

  // print the calculated area, radius and inflow.k
  printf("The area is: %.1f\n", area);
  printf("The equal area radius is: %.2f\n", radius);
  printf("The inflow for R = %.0f is %.1f * k \n", radius_of_influence, inflow_on_k);

  // obtain a value for k from the user
  printf("Enter k (m/s) in format n1.n2e-n3: ");
  scanf("%f", &k);
  // print k back to the user
  printf("k is %.1e\n", k);

  // print the calculated flow for the given k
  printf("The inflow is: %8.2f l/s or %4.2f m3/day\n", k * inflow_on_k * 1000, k * inflow_on_k * 86400);

  printf("Press any key to close ..");
  getch(); // The getch() function stops the exe popup from closing until a key is pressed

  return 0;
}