//6.program to read days from the user and convert into years,months,weeks,days.
#include<stdio.h>
main()
{
    int total,years,mon,days,weeks;

    printf("Enter the total no of days: ");
    scanf("%d",&total);

    years=total/365;
    total=total-(years*365);
    mon=total/30;
    total=total-(mon*30);
    weeks=total/7;
    total=total-(weeks*7);
    days=total;

    printf("%d years",years);
    printf("\t %dmonths",mon);
    printf("\t %dweeks",weeks);
    printf("\t %ddays",days);

    printf("\n");
}
