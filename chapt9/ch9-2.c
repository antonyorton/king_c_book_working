// Name:     ch9-2.c
// Purpose:  A function which has no return value
// Author:   A Orton

// NOTES
// print_count() does not return anything, and so its type is 'void'
// Similarly, print_pun() has no parameters, so the type of its parameters
// is 'void'

#include <stdio.h>

void print_count(int n) { printf("T minus %d and counting\n", n); }

void print_pun(void) { printf("To C or not to C, that's the question"); }

int main(void) {
  int start;

  printf("Enter a starting number:");
  scanf("%d", &start);

  for (int i = start; i >= 0; i--) {
    print_count(i);
  }

  print_pun();

  return 0;
}