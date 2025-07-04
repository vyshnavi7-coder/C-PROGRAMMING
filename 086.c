// program to read a table no,starting value,ending value and print table from starting value to ending value
#include<stdio.h>
main()
{
 int tab,st,nd,res;
  printf("enter a table no:");
  scanf("%d",&tab);
  printf("enter starting value:");
  scanf("%d",&st);
  printf("enter a ending value:");
  scanf("%d",&nd);
  for(st=st;st<nd;st++)
  {
   res=st*tab;
   printf("\n %d*%3d=%3d",tab,st,res);
  }

