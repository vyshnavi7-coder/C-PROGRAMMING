//program to print  prime no btw 2 given +ve nos

#include<stdio.h>
 main()
 {
   int no,a,b=0;

   int isprime(int no)
   {
    if(no<=1)return 0;
    for(int i=2;i*i<=no;i++)
    {
     if (no%i==0)return 0;
     return 1;
    }
   }
   printf("enter a 1 no:");
   scanf("%d",&a);
   printf("enter a 2 no:");
   scanf("%d",&b);

   if(a>b)
   {
    printf("invalid range\n");
    return 1;
   }
   printf("prime nos btw %d to %d are:\n",a,b);

   for(int i=a;i<=b;i++)
   {
    if (isprime(i))
    printf("%d\n",i);
   }
 }

