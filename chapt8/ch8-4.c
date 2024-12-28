// Name:     ch8-4.c
// Purpose:  Check a number sequence for repeated values
// Author:   A Orton

// NOTES
// uses an integer array to increment occurances of digits input by user

#include <stdio.h>

#define N 4

int main(void) {
  int num[N];  // array to store input digits

  // array to record the occurances of each digit 0..9
  int digit_seen[10] = {0};

  // read in user input digits
  printf("Enter a number of up to %d digits: ", N);
  for (int i = 0; i < N; i++)
    scanf("%1d", &num[i]);  // read the digits to num[]

  // increment counter for each digit seen
  for (int i = 0; i < N; i++) {
    digit_seen[num[i]] += 1;
  }

  // flag values where more than one occurence of a particular digit
  for (int i = 0; i < 10; i++) {
    if (digit_seen[i] > 1) printf("More than one %d\n", i);
  }

  return 0;
}