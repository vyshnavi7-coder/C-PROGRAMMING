//program to print inputted names N times

#include<stdio.h>
main()
{
 char name[10];
 int i,no;

  printf("enter name:");
  scanf("%s",&name);

  printf("how many times u want to print:");
  scanf("%d",&no);

  for(i=0;i<no;i++)
  printf("\t%s",name);
}

