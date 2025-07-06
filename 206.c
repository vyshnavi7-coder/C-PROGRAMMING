//program  to find 2nd biggest number from the inputted 10 numbers
#include<stdio.h>
main()
{
int no,sbig,big,count;
no=sbig=big=0;

for(count=1;count<=10;count++)
{
printf("Enter %d no...:",count);
scanf("%d",&no);

if(no>big)
{
sbig=big;
big=no;
}
else
    if(no>sbig&&no!=big)
    sbig=no;
    }
    printf("\nsecond biggest no is:%d",sbig);

    printf("\n");
}
