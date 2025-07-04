//program to swap values of two variables A and B without using 3rd variable.
#include<stdio.h>
main()
{
    int a,b;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);

    a=a+b;     b=a-b;     a=a-b;

    printf("A is: %d",a);
    printf("\nB is: %d",b);

    printf("\n");
}
