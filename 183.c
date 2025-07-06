//program to accept student no,name,avg

#include<stdio.h>
main()
{
   struct std
   {
       int no;
       char name[20];
       float avg;
   }s1;

   printf("enter student no:");
   scanf("%d",&s1.no);
   printf("enter student name:");
   scanf("%s",&s1.name);
   printf("enter student avg:");
   scanf("%f",&s1.avg);
   printf("\n\n%d%s%f",s1.no,s1.name,s1.avg);
}

