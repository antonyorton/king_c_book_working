// Name:     progex2.c
// Purpose:  Chapter 3 programming project 2
// Author:   A Orton

// NOTES

#include <stdio.h>

int main(void)
{

  int item_no;
  float unit_price;
  int month, day, year;

  printf("Enter item number: ");
  scanf("%d", &item_no);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter date (dd/mm/yyyy): ");
  scanf("%d / %d / %d", &day, &month, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-6.4d\t\t$ %-7.2f\t%.4d-%.2d-%.2d",
         item_no, unit_price, year, month, day);

  return 0;
}