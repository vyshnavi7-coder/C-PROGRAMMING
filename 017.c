//write a program to evaluate (a+b)^2.
#include<stdio.h>
main()
{
    float a,b,result;

    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);

    result=(a+b)*(a+b);

    printf("result (a+b)^2 is :%.2f\n",result);

}

