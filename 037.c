//program to check weather you were born on leap year or not
#include<stdio.h>
main()
{
    int year;
    year=0;

    printf("Enter the Year you were born on : ");
    scanf("%d",&year);

    if(year%4==0 && year%400!=0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
}

