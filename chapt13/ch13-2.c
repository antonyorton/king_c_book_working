// Name:     ch13-2.c
// Purpose:  Declaring string variables
// Author:   A Orton

// NOTES
// C does not have a string type. This makes things harder.

#include <stdio.h>

int main(void) {
  char mydate[] = "Sat 28";  // this seems a reasonable way to declare a string

  // could also explicitly give array length, however the array length must be
  // greater or equal to num characters plus one
  char mydate2[7] = "Sat 28";

  char *mydate3 = "Sat 28";  // third version of declaring a string

  mydate[1] = '0';  // can modify entries of the array version
  // mydate3[1] = 0;  // but not the pointer version - this crashes the program

  printf(mydate);

  // Print the characters via the pointer p
  for (char *p = mydate; p < mydate + 7; p++) {
    printf("\n%c", *p);
  }
  // also works with the pointer version mydate3
  for (char *p = mydate3; p < mydate3 + 7; p++) {
    printf("\n%c", *p);
  }

  // note that the length of mydate is the number of characters plus one for
  // the null character
  printf("\n%d", sizeof(mydate) / sizeof(mydate[0]));

  return 0;
}