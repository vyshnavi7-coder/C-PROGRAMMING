//program to read 10 numbers from the user and find the sum
#include<stdio.h>
main()
{
int no,c,sum;
no=sum=0;

for(c=1;c<=10;c++)
{
printf("Enter %d no...:",c);
scanf("%d",&no);

if(no<=0)
{
printf("terminating the input process...");
break;
}
sum=sum+no;
}
printf("sum of %d numbers is:%d",c,sum);

printf("\n");
}

