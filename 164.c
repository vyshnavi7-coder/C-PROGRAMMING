//program to generate bill amount for the inputted price of two products
#include<stdio.h>
void main()
{
int p1,p2,billamount;
p1=p2=billamount=0;

printf("Enter price of lays chips...:");
scanf("%d",&p1);

printf("Enter price of dairy milk...:");
scanf("%d",&p2);

billamount=p1+p2;

printf("total bill amount for both the products are..:%d",billamount);

printf("\n");
}

