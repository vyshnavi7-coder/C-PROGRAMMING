//program that string,function and pointers
#include<stdio.h>
main()
{
   void dispname(char*);
   char name[20];
   printf("enter ur name:");
   scanf("%s",name);

   dispname(name);
}
 void dispname(char*x)
 {
     while(*x!='\0')
     {
         printf("\nchar at %u is %c..",x,*x);
         x++;
     }
 }

