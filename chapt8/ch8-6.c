// Name:     ch8-6.c
// Purpose:  Print a table of balances for various interest rates
// Author:   A Orton

// NOTES

#include <stdio.h>

#define NUM_RATES 5
#define INITIAL_BALANCE 100

int main(void) {
  int interest_rate, number_years;
  float values[NUM_RATES];

  for (int i = 0; i < NUM_RATES; i++) {
    values[i] = INITIAL_BALANCE;  // initialise values[]
  }

  printf("Enter base interest rate (%%): ");
  scanf("%d", &interest_rate);

  printf("Enter number of years: ");
  scanf("%d", &number_years);

  // Print header row
  printf("Years");
  for (int i = 0; i < NUM_RATES; i++) printf("     %5d%%", interest_rate + i);

  // Print calculated rows
  for (int year = 0; year < number_years; year++) {
    // Print year column
    printf("\n%-5d", year + 1);
    // Print calculated values for a given year
    for (int j = 0; j < NUM_RATES; j++) {
      values[j] = values[j] * (1 + (interest_rate + j) / 100.0);
      printf("     %5.2f", values[j]);
    }
  }

  return 0;
}