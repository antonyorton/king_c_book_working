// Name:     ch13-8.c
// Purpose:  Command line arguments
// Author:   A Orton

// NOTES
// To access command line arguments we define main() with two parameters
// int main(int argc, char *argv[])  Important: it is *argv[], not *argv

// argc will be the number of command line arguments, while *argv[] is an array
// of pointers to the command line arguments. argv[0] is the name of the program
// and argv[1], argv[2] .. are the command line arguments.
// Also note that argv[argc] is always a null pointer.

#include <stdio.h>
#include <string.h>

int is_planet(const char *s);

int main(int argc, char *argv[]) {
  // checks if provide arguments are planets
  for (int i = 0; i < argc; i++) {
    printf("%s, is_planet = %d\n", argv[i], is_planet(argv[i]));
  }

  return 0;
}

// check if s is a planet
int is_planet(const char *s) {
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};

  for (int i = 0; i < sizeof(planets) / sizeof(planets[0]); i++) {
    if (strcmp(planets[i], s) == 0) {
      return 1;
    }
  }
  return 0;
}