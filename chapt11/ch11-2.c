// Name:     ch11-2.c
// Purpose:  Pointer assignment
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void) {
  int i, j, k;
  int *p, *q, *r;

  i = 72;
  k = 334;

  p = &i;  // Address of i is copied into p

  q = p;  // contents of p (address of i) copied into q

  // Now both q and p point to the address of i
  printf("%d\n", i);   // 72
  printf("%d\n", *p);  // 72
  printf("%d\n", *q);  // 72
  *q = 22;  // now that i, *p and *q are aliases of one another, a change to
            // one affects all
  printf("%d\n", i);   // 22
  printf("%d\n", *p);  // 22
  printf("%d\n", *q);  // 22

  r = &k;
  printf("%d\n", *p);  // 22
  printf("%d\n", *r);  // 334
  *r = *p;  // Here we copy the value of the object in address pointed to by p
            // into the address pointed to by r
  printf("%d\n", *p);  // 22
  printf("%d\n", *r);  // 22
  *p = 244;  // note however, that unlike p and q, p and r are NOT aliases
             // of one another since they point to different addresses
             //(since p = &i, r = &k)
  printf("%d\n", *p);  // 244
  printf("%d\n", *r);  // 22

  return 0;
}