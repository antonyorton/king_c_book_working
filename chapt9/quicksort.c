// Name:     quicksort.c
// Purpose:  Implementation of quicksort algorithm
// Author:   A Orton

// NOTES
// This is the first real algorithm I have implemented in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void permute(int n, int a[n]);
void print_array(int n, int a[n]);
void partition_array(int n, int start, int end, int a[n]);
int rfind(int n, int val, int start, int a[n]);
int lfind(int n, int val, int start, int a[n]);

int main(void) {
  int a[N];

  // create an array [0, 1, 2, .. N - 1]
  for (int i = 0; i < N; i++) {
    a[i] = i;
  }
  // printf("Array = ");
  // print_array(N, a);

  printf("Permuted array = ");
  permute(N, a);
  print_array(N, a);

  printf("\nPartitioned array = ");
  partition_array(N, 0, N, a);
  print_array(N, a);

  // // Testing for rfind and lfind
  // for (int i = 0; i < 10; i++) {
  //   permute(N, a);
  //   print_array(N, a);
  //   i1 = rfind(N, 5, N, a);
  //   printf("\n rfind returns = %d, a[%d] = %d", i1, i1, a[i1]);
  //   i1 = lfind(N, 5, 0, a);
  //   printf("\n lfind returns = %d, a[%d] = %d", i1, i1, a[i1]);
  // }

  return 0;
}

void partition_array(int n, int start, int end, int a[n]) {
  // Sorts an array via recursive partitioning:
  // Partition array from start to end, based on a[start] so that all items to
  // left of new position of a[start] are less than a[start] and all items to
  // right are greater than or equal to a[start]

  int hole, hole_new, val, temp;

  hole = end;
  hole_new = start;
  val = a[start];

  while (abs(hole - hole_new) > 1) {
    // Shift a low value from right to left
    temp = hole_new;
    hole_new = rfind(n, val, hole, a);
    hole = temp;
    a[hole] = a[hole_new];
    a[hole_new] = val;

    // Shift a high value from left to right
    temp = hole_new;
    hole_new = lfind(n, val, hole, a);
    hole = temp;
    a[hole] = a[hole_new];
    a[hole_new] = val;
  }

  // recursive partition of the left side
  if (hole_new - start > 1) {
    partition_array(n, start, hole_new, a);
  }

  // recursive partition the right side
  if (end - hole_new > 2) {
    partition_array(n, hole_new + 1, end, a);
  }
}

int rfind(int n, int val, int start, int a[n]) {
  // find right most element < val, starting at start - 1
  for (int i = start - 1; i >= 0; i--) {
    if (a[i] <= val) {
      return i;
    }
  }
  return start - 1;  // if not found, return n
}

int lfind(int n, int val, int start, int a[n]) {
  // find left most element >= val starting at start
  for (int i = start; i < n; i++) {
    if (a[i] >= val) {
      return i;
    }
  }
  return start;  // if not found, return start
}

void permute(int n, int a[n]) {
  // Randomly permute an array of integers
  int temp, rand_int;
  srand((unsigned)time(NULL));  // seed the random number generator

  for (int i = 0; i < n; i++) {
    rand_int = rand() % n;
    temp = a[i];
    a[i] = a[rand_int];
    a[rand_int] = temp;
  }
}

void print_array(int n, int a[n]) {
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}