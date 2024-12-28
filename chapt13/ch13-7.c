// Name:     ch13-7.c
// Purpose:  Arrays of strings
// Author:   A Orton

// NOTES
// The way we deal with arrays of strings is to declare an array of pointers
// to strings

#include <stdio.h>

int main(void) {
  // notice that we do not need to declare a 2D array here
  // each element of planets is a pointer to a null terminated string
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};

  // Print the planet name along with its first letter
  for (int i = 0; i < sizeof(planets) / sizeof(planets[0]); i++) {
    printf("%s begins with %c\n", planets[i], planets[i][0]);
  }

  return 0;
}