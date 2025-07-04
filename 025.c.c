//program to print if a number is positive or negative
#include<stdio.h>
main()
{
    int num;
    printf("Enter a Number (A Integer) : ");
    scanf("%d",&num);
    if(num>0)
        printf("%d is positive..",num);
    else
        if(num<0)
            printf("%d is negative..",num);
    else
            printf("Neutral");
}

