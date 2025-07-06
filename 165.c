//business owner wants to know total sales of two months january and february write a program to print total sales
#include<stdio.h>
main()
{
int s1,s2,ts;
s1=s2=ts=0;

printf("Enter sales of january month:");
scanf("%d",&s1);
printf("Enter sales of february month:");
scanf("%d",&s2);

ts=s1+s2;

printf("total sales for january and february is:%d",ts);

printf("\n");
}

