// Name:     ch5-3.c
// Purpose:  boolean statements
// Author:   A Orton

// NOTES
// In C, a boolean type does not exist. The result of an expression such as (1
// == 2) will equal the int 0, and similarly (1 == 1) will equal the int 1.
// There is, however, a library <stdbool.h>, which provides variables (macros)
// named true and false which stand for 1 and 0 respectively, and also a type
// bool, which is really just an integer in disguise that can take only the
// values 0 and 1

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int i;
  bool flag;  // here we are using the type bool from <stdbool.h>

  printf("Input a number: ");
  scanf("%d", &i);

  printf("Your number is %d\n", i);

  // here we are using the variable true from <stdbool.h>
  if ((i < 5) == true) {
    printf("Your number is less than 5\n");
  }

  // here we are using the variable false from <stdbool.h>
  if ((i < 5) == false) {
    printf("Your number is not less than 5\n");
  }

  // here we use an alternative method using the bool flag
  flag = (i < 5);
  flag ? printf("Flagged as less than 5")
       : printf("Flagged as not less than 5");

  return 0;
}