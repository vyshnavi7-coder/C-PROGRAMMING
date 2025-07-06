//program to print tables for any inputted from any start point to any end point
#include<stdio.h>
main()
{
int tno,sv,ev,res;
tno=sv=ev=res=0;

printf("Enter table no...:");
scanf("%d",&tno);

printf("Enter starting value...:");
scanf("%d",&sv);

printf("Enter ending value...:");
scanf("%d",&ev);

while(sv<=ev)
{
res=tno*sv;
printf("\n%d*%d=%d",tno,sv,res);
sv++;
}
}
