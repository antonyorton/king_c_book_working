// Name:     ch13-1.c
// Purpose:  String literals and char pointers
// Author:   A Orton

// NOTES
// A string literal (ie constant) is a set of characters surrounded by double
// quotes such as "my name is bob".

// These are treated as character arrays by C. For example "abc" is stored as
// ['a', 'b', 'c', '\0'] where '\0 ' is the null character which marks the end
// of the string.

// Since string literals are stored as arrays, the compiler treats them as a
// pointer p of type char *p

#include <stdio.h>

int main(void) {
  char *p, *q;
  char c1;

  // String literal - treated as a char * pointer by C
  p = "abc def";
  printf(p);

  // character - treated similar to an int by C
  c1 = 'z';
  printf("\n%c", c1);

  printf(c1);  // ILLEGAL - printf needs a pointer, not a character

  // print out all the characters in p
  for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
    printf("\n%c", p[i]);
  }

  return 0;
}