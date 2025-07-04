//program to swap the values of  variables a,b (witout using any temp,+,-).
#include<stdio.h> main()
{
    int a,b;
    printf("Enter the values for A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("A is: %d",a);
    printf("\nB is: %d",b);
}

