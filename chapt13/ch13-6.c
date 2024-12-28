// Name:     ch13-6.c
// Purpose:  String idioms - King ch 13.6
// Author:   A Orton

// NOTES
// This contains some serious condensing of code.

// 1. in string_len() we realise that checking (*s != '\0') is the same as
//    checking (*s != '0') which is (*s == true) which is just the same as
//    checking (*s). We then also increment s while checking it to arrive at
//    [ while(*s++) ] which is a condensed form of [ for(; *s != '\0'; s++) ].

//    IDIOM:   while(*s){s++;}   searches for the end of a string
//
// 2. in string_copy() we are able to, quite impressively,
// replace:
//
//      while (*s) {
//        *snew++ = *s++;
//      }
//      *snew = '\0';
//
// with (IDIOM - copy string):
//
//      while (*snew++ = *s++) {
//         ;
//       }
//
// This is possible since the while loop tests the character that was copied and
// so does not terminate until after the null character is copied.

#include <stdio.h>
#include <string.h>

int string_len(const char *s);
void string_copy(char *snew, const char *s);

int main(void) {
  // some interesting C string methods
  char str1[100];
  char str2[100];
  int len;

  // string_len()
  strcpy(str1, "abcdef");
  strcpy(str2, " hey boblinary 123");
  printf("Len str1 = %d\n", string_len(str1));
  printf("Len str2 = %d\n", string_len(str2));
  strcat(str2, str1);
  printf("Len str2 = %d\n", string_len(str2));

  // string_copy()
  printf("%s\n", "");
  string_copy(str1, "1  abcdef123");
  printf("%s\n", str1);

  return 0;
}

int string_len(const char *s) {
  const char *p = s;  // a pointer to the start of s which does not change

  // while *s is not the null character, increment s
  while (*s) {
    s++;
  }

  // return the arithmetic difference between start and current values of s
  return s - p;
}

void string_copy(char *snew, const char *s) {
  while (*snew++ = *s++) {
    ;
  }
}
