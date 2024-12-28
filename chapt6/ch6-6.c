// Name:     ch6-6.c
// Purpose:  Find primes less than a given n.
//           Illustrates use of the break command
// Author:   A Orton

// NOTES
// Possibly my first real c program (2024-12-08)

#include <stdio.h>

int main(void) {
  int n;

  // basic user input
  printf("Input a number larger than 3: ");
  scanf("%d", &n);
  printf("Your number is: %d\n", n);

  // For all numbers (j) from 3 to n
  //  check if (j) is non-prime by finding (i) less than j,
  //  such that j mod i == 0
  for (int j = 3; j <= n; j++) {
    for (int i = 2; i < j; i++) {
      if (j % i == 0) break;
      if (i == j - 1) printf("%d is a prime number.\n", j);
    }
  }

  return 0;
}