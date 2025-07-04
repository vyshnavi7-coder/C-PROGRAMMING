//program to print factor of +ve nos

#include<stdio.h>
main()
{
 int no,i;

 printf("enter a positive no:");
 scanf("%d",&no);

 printf(" factors of %d are:",no);

 for(i=1;i<=no;i++)
 {
  if (no%i==0)
  printf("%d\t",i);
 }
}

