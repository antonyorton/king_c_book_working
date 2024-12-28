// Name:     ch5-4.c
// Purpose:  switch statement
// Author:   A Orton

// NOTES
// There is no way to specify a range of values for a single case (see King p88)
// hence the code can look a bit repetitive. Not also that Google
// formatting splits each case to a new line

#include <stdio.h>

// This function returns the season for a user input month of between 1 and 12.
int main(void) {
  int month;

  printf("Input month as a number between 1 and 12: ");
  scanf("%d", &month);

  printf("Your number is %d\n", month);

  // return the season for a given month
  switch (month) {
    case 1:
    case 2:
    case 12:
      printf("Summer (southern), Winter (northern)");
      break;
    case 3:
    case 4:
    case 5:
      printf("Autumn (southern), Spring (northern)");
      break;
    case 6:
    case 7:
    case 8:
      printf("Winter (southern), Summer (northern)");
      break;
    case 9:
    case 10:
    case 11:
      printf("Spring (southern), Autumn (northern)");
      break;
    default:
      printf("Error: The number entered is not between 1 and 12");
      break;
  }

  return 0;
}