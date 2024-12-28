// Name:     ch13-3.c
// Purpose:  Writing strings
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void) {
  char str[] = "Are we having fun yet?";

  // Write string using printf
  printf("%s\n", str);        // write the whole string
  printf("%12.7s|\n", str);   // first 7 characters of string in a field of 12
  printf("%-12.7s|\n", str);  // first 7 characters of string in a field of 12

  // Write string using puts
  puts(str);  // Only one argument is provided for puts

  return 0;
}