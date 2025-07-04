//program to fill the array of 10 number with random number,print even nos,odd no,and prime no separately

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define size 10
#define max_random 999

bool isprime(int no)
{
    if(no<=1)return 0;
    for(int i=2;i*i<=no;i++)
    {
      if(no%i==0)return 0;
    }
   return 1;
}
 int main()
{
 int array[size];
 srand(time(0));

 for(int i=0;i<size;i++)
 {
     array[i]=rand()%(max_random+1);
 }
 printf("generated array:\n");
 for(int i=0;i<size;i++)
 {
     printf("%d\t",array[i]);
 }
 printf("\n");
 printf("even no:\n");
 for(int i=0;i<size;i++)
 {
         if(array[i]%2==0)
         {
             printf("%d\t",array[i]);
         }
     }
     printf("\n");

     printf("odd no:\n");
     for(int i=0;i<size;i++)
     {
         if(array[i]% 2!=0)
         {
             printf("%d\t",array[i]);
         }
     }
     printf("\n");
     printf("prime no:\n");
     for(int i=0;i<size;i++)
     {
         if(isprime(array[i]))
         {
             printf("%d\t",array[i]);
         }
     }
     printf("\n");
     return 0;
 }

