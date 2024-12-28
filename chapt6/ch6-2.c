// Name:     ch6-2.c
// Purpose:  print a table of squares using a whole loop
// Author:   A Orton

// NOTES

#include <stdio.h>

// This function prints a table of squares starting from 1
int main(void) {
  int mylen;
  int i;

  // user input number of entries in the table
  printf("Input number of entries in the table: ");
  scanf("%d", &mylen);
  printf("The input number of entries in the table is %d\n", mylen);

  // print table of results
  printf("x     x^2\n", 0);
  i = 1;
  while (i <= mylen) {
    printf("%-5d  %-5d\n", i, i * i);
    i = i + 1;
  }

  return 0;
}