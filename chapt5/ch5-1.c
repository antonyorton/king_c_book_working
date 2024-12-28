// Name:     ch5-1.c
// Purpose:  my first if-else in c (6 Dec 2024)
// Author:   A Orton

// NOTES
// To make the if-else fomatting like Javascript, I added in settings.json:
// "C_Cpp.clang_format_fallbackStyle": "Google". Which, to revert back it can be
// changed to: "C_Cpp.clang_format_fallbackStyle": "Visual Studio"

#include <stdio.h>

int main(void) {
  int i;

  printf("Input a number between 1 and 10 inclusive: ");
  scanf("%d", &i);

  printf("Your number is %d", i);

  // standard if statement
  if (2 * (i / 2) == i) {
    printf("\nWhich is an EVEN number.");
  } else {
    printf("\nThis is an ODD number.");
  };

  // ternary operator if statement
  (2 * (i / 2) == i) ? printf("\nEVEN") : printf("\nODD");

  return 0;
}