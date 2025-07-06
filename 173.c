//program to work with numeric functions
#include<stdio.h>
#include<math.h>
main()
{
 int no,b,p;
 printf("enter a no:");
 scanf("%d",&no);
 printf("sqrt root of %d is %lf..",no,sqrt(no));

 printf("\n\n enter base:");
 scanf("%d",&b);
 printf(" enter power:");
 scanf("%d",&p);
 printf("%d power %d is %lf..",b,p,pow(b,p));
}

