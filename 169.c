//program to calculate simple interest
#include<stdio.h>
main()
{
int p,t,r,i;

printf("Enter principle amount:");
scanf("%d",&p);

printf("Enter time in years:");
scanf("%d",&t);
printf("Enter rate of interest:");
scanf("%d",&r);
i=(p*t*r)/100;

printf("interest for Rs.%d at the rate of %d is for %d years is %d..",p,r,t,i);
printf("\n");
}

