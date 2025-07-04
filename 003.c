//program to read total flying time from hyd to singapore in minutes and display into hours and minutes.

#include<stdio.h>
main()
{
    int totalmin,min,hour;
    //input:
    printf("Enter the total min:");
    scanf("%d",&totalmin);

    //output:
    hour=totalmin/60;
    printf("the no of hours is :%d",hour);
    printf("\n the no of min is :%d",min);

    printf("\n");
}
