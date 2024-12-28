// Name:     ch13-4.c
// Purpose:  Reading strings
// Author:   A Orton

// NOTES
// Reading strings using scanf and gets is unstable. C programmers often write
// their own string reading functions which read a character at a time
//
// Can seem to use scanf and fgets with stdin at the same time
//
// Created custom read_line function following King p287 which reads character
// by character and therefore could be modified to provide more control over
// processing
//
// Created custom count_spaces function
// Interesting to note that when we pass a string to a function the function
// can calculate the length of the string by looking for the null character '\0'
// which is different to numeric arrays.

#include <stdio.h>

#define N 100

int read_line(char str[], int n);
int count_spaces(const char str[]);
int p_count_spaces(const char str[]);

int main(void) {
  char str[N];
  int strlen;
  int spaces_count;

  // // 1. Using scanf
  // printf("Enter a string: ");
  // scanf("%Ns", str);  // PROBLEM - scanf doesn't read white space
  // printf("%s\n", str);

  // // 2. Using fgets
  // printf("Enter a second string: ");
  // // fgets picks up white space and reads until a new line character.
  // // Use of gets is not allowed by gcc
  // fgets(str, N, stdin);
  // printf(str);

  // using custom function
  printf("Enter a string: ");
  strlen = read_line(str, N);
  spaces_count = p_count_spaces(str);
  printf("%s\n", str);
  printf("strlen = %d,  ", strlen);
  printf("length of str[] = %d\n", sizeof(str) / sizeof(str[0]));
  printf("There were %d spaces in the string", spaces_count);

  return 0;
}

// Custom read line function
// By reading one character at a time, this provides additional control
int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;  // return the maximum index of the array
}

// count spaces using array indexing
int count_spaces(const char str[]) {
  int num_spaces = 0;
  char ch;
  int i = 0;

  while ((str[i] != '\0')) {
    if (str[i++] == ' ') {
      num_spaces += 1;
    }
  }
  return num_spaces;
}

// count spaces using pointer arithmetic
// note the direct use of *str (without creating a char *p = str)
int p_count_spaces(const char *str) {
  int num_spaces = 0;

  // similar to a while loop here
  for (; *str != '\0'; str++) {
    if (*str == ' ') {
      num_spaces += 1;
    }
  }

  return num_spaces;
}