// Name:     ch9-3.c
// Purpose:  Test whether a number is prime
// Author:   A Orton

// NOTES
// Got tripped up on the mathematics of this one at first.
// Note that a % b is the remainder when a is divided by b

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Your number is %d\n", n);

  printf("Is your number prime? %d", is_prime(n));

  return 0;
}