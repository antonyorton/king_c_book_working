// Name:     ch9-7.c
// Purpose:  Use of the exit() function to teminate a function
// Author:   A Orton

// NOTES

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_TRIES 5

int print_rands(int n);

int main(void) {
  print_rands(NUM_TRIES);

  return 0;
}

// function to demonstrate use of the exit() function
int print_rands(int n) {
  int num;

  srand((unsigned)time(NULL));  // seed the random number generator

  for (int i = 0; i < n; i++) {
    num = rand() % n;
    if (num > n * 0.7) {
      printf("Exited function due to number %d ", num);
      exit(EXIT_FAILURE);  // Exit the function with a failure status
    } else {
      printf("%d ", num);
    }
  }
  printf("Successfully printed %d numbers", NUM_TRIES);
  exit(EXIT_SUCCESS);  // Exit with a success status code
}
