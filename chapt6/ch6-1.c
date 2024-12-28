// Name:     ch6-1.c
// Purpose:  basic while loop
// Author:   A Orton

// NOTES
// It is not necessary to use the {} after the while statement
// however it is highly recommended. Lines do not format correctly if not.

#include <stdio.h>

int main(void) {
  int n, mylen;
  int i;

  // user input of a starting integer n
  printf("Input a starting number: ");
  scanf("%d", &n);
  printf("Your number is n = %d\n", n);

  mylen = 5;  // numbers to include in each sequence

  i = 0;
  printf("The integers from n to n + %d are:\n", mylen - 1);
  while (i < mylen) {
    printf("%d\n", n + i);
    i = i + 1;
  }

  i = 0;
  printf("The positive integers from n to n - %d are:\n", mylen - 1);
  while ((i < mylen) && (n - i > 0)) {
    printf("%d\n", n - i);
    i = i + 1;
  }

  return 0;
}