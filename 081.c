// program to read a no and print that no of many times
#include<stdio.h>
 main()
 {
   int c,no=0;
   c=1;

   printf("enter a no:");
   scanf("%d",&no);
   while(c<=no)
     {
       printf("\t%d",no);
       c++;
     }
 }

