//program to create a menu of programs and run the specific program based on using switch case
#include<stdio.h>
main()
{
int a,b,res,opt;

printf("\nprograms menu");
printf("\n***************");
printf("\n1.adding of two numbers");
printf("\n2.square of a number");
printf("\n3.cube of a number");
printf("\n4.even or odd number check");
printf("\n5.exit");

printf("\n\nenter ur option(1-5):");
scanf("%d",&opt);

switch(opt)
{
 case 1:{
          printf("enter two numbers..:");
          scanf("%d%d",&a,&b);
          res=a+b;
          printf("sum of two numbers is:%d",res);
          };break;
 case 2:{
         printf("Enter a no:");
         scanf("%d",&a);
         printf("square of %d is:%d",a,(a*a));
         };break;
 case 3:{
         printf("Enter a no:");
         scanf("%d",&a);
         res=a*a*a;
         printf("cube of %d is:%d",a,res);
         };break;
 case 4:{
         printf("Enter a no");
         scanf("%d",& a);
         if(a%2==0)
          printf("%d is even no...",a);
          else
              printf("%d is odd no...",a);
              };break;
 case 5:exit(0);
 default:printf("\ninvalid input..");break;
}
}

