16.	//program to calculate electricity from the inputted present month and last month reading.
#include<stdio.h>
main()
{
    int pre,last,uc;
    float amt;
    pre=last=uc=amt=0;

    printf("Enter present month reading...:");
    scanf("%d",&pre);
    printf("Enter last month reading...:");
    scanf("%d",&last);

    uc=pre-last;
    amt=uc*7.85;

    printf("bill amt is: %.2f",amt);
    printf("\n");
}

