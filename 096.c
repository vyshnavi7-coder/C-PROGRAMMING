//program to check whether the input no is strong or not
#include<stdio.h>
main()
{
 int no,original_no,sum=0;

 int factorial(int n)
 {
     int fact=1;
     for(int i=1;i<=n;i++)
     {
         fact*=i;
     }
     return fact;
 }
     printf("enter a no:");
     scanf("%d",&no);

     original_no=no;

     while(no!=0)
     {
         int digit=no%10;
         sum+=factorial(digit);
         no/=10;
     }
     if(sum==original_no)
     {
         printf("%d is a strong no\n",original_no);
     }
    else
    {
        printf("%d is  not a strong no\n",original_no);
    }
}

