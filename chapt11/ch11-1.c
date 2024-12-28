// Name:     ch11-1.c
// Purpose:  First use of a pointer
// Author:   A Orton

// NOTES
// If p is a pointer to an int i, int *p = &i, then *p is an alias for
// i, so assigning a value to *p also assigns that value to i.

#include <stdio.h>

int main(void) {
  int i;
  int *p;  // declare a pointer to an integer (points to nowhere at present)

  i = 522;
  p = &i;  // the pointer p now points to the location of i in memory

  printf("%d\n", *p);  // print the int value at the address pointed to by p
  printf("%p\n", p);   // print the address pointed to by p

  printf("%p\n", &*p);  // print the address pointed to by p

  printf("%d\n", i);
  printf("%d\n", *p);
  *p = 344;  // change the value of *p (and hence also the value of i)
  printf("%d\n", i);
  printf("%d\n", *p);

  // Dangerous example of an un-initialised pointer
  int *q;
  printf("%d\n", *q);  // Fails and causes program to teminate
  *q = 1;  // Especially bad. Address which q points to is not defined

  return 0;
}