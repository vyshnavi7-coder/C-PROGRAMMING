//program to print armstrong no till 1000
#include<stdio.h>
main()
{
int no,r,sum,temp;
no=r=sum=temp=0;

for(no=0;no<=1000;no++)
{
sum=0;
temp=no;

while(no>0)
{
r=no%10;
sum=sum+(r*r*r);
no=no/10;
}
no=temp;
if(sum==no)
printf("\n%d",no);
}
printf("\n");
}

