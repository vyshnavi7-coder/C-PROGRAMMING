//program to check weather a number is even or odd using only ternary operator
#include<stdio.h>
main()
{
     int no;

    printf("Enter a number : ");
    scanf("%d",&no);

    if(no%2==0)
        printf("%d is Even",no);
    else
        printf("%d is Odd",no);
}

