//program to read price of 3 chocolates,and display the average price of each chocolate
#include<stdio.h>
main()
{
int c1,c2,c3;
float avg;
c1=c1=c3=avg=0;

printf("Enter price of 1st chocolate:");
scanf("%d",&c1);
printf("Enter price of 2snd chocolate:");
scanf("%d",&c2);
printf("Enter price of 3rd chocolate:");
scanf("%d",&c3);
avg=(c1+c2+c3)/3;
printf("average price of each  chocolate is:%f",avg);
}

