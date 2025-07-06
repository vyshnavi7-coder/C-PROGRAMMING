//program to prepare bill for the customer who purchases two items in offer
#include<stdio.h>
main()
{
int price1,price2;

printf("Enter price of trouser...:");
scanf("%d",&price1);

printf("Enter price of T-shirt...:");
scanf("%d",&price2);

if(price1>price2)
  printf("ur bill amount for 1+1 offer items is:%d",price1);
  else
      printf("ur bill amount for 1+1 offer items is:%d",price2);

      printf("\n");
}

