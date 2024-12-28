// Name:     ch13-5.c
// Purpose:  The C String Library
// Author:   A Orton

// NOTES
// 1. char *strcpy(char *s1, const char *s2);
//    (safer version is strncpy(str1, str2, n) which take an integer length)
//    Compensates for the inability to directly assign a string literal to a
//    string array (pointer) variable via, for example, str = "abcd"
//
// 2. size_t strlen(const char *s)
//    returns an (unsigned) integer length of the string not including null char
//
// 3. char *strcat(char *s1, const char *s2)
//    (also has a safer version strncat())
//    appends the contents of s2 to the end of s1 and returns the pointer s1
//
// 4. int strcmp(const char *s1, const char *s2)
//    compares s1 and s2 returning less than, equal to, or greater than 0.
//

#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[100];
  char str2[100];
  int len;

  // strcpy --------------------------------------

  // str1 = "abcd"; // ERROR - not allowed
  strcpy(str1, "abcdef");  // OK

  // str2 = str1; // ERROR - not allowed
  strcpy(str2, str1);  // OK

  // strncpy - note we need to manually place a null terminator
  strncpy(str2, str1, 2);
  str2[2] = '\0';

  printf("%s\n", str1);
  printf("%s\n", str2);

  // strlen ------------------------------------

  len = strlen("abc");
  printf("%d\n", len);
  len = strlen("");
  printf("%d\n", len);
  len = strlen(str1);
  printf("%d\n", len);

  // strcat ------------------------------------

  strcpy(str1, "abc1");
  strcpy(str2, "def2");
  printf("%s\n", str1);
  printf("%s\n", str2);
  strcat(str1, str2);  // append str2 to str1
  printf("%s\n", str1);

  char str3[5];
  strcpy(str3, "ghi");
  // strcat(str3, "jklmno");  // compiler error since str3[] size is to small
  strncat(str3, "jklmno", 4);  // ok with strncat() if we limit the num to copy
  printf("%s\n", str3);

  // strcmp -----------------------------------
  strcpy(str1, "abcd");
  strcpy(str2, "abce");
  printf("%d\n", strcmp(str1, str2));
  printf("%d\n", strcmp(str2, str1));

  return 0;
}