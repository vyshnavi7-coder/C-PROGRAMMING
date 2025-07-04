//program to find min and max no from the array of 10 input no

#include<stdio.h>
main()
{
 int arr[10];
 int i,min,max;

 printf("enter 10 nos:");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 min=arr[0];
 max=arr[0];

 for(i=1;i<10;i++)
 {
  if(arr[i]<min)
  {
   min=arr[i];
  }
   if(arr[i]>max)
   {
   max=arr[i];
   }
 }
   printf("minimum:%d\n",min);
   printf("maximum:%d\n",max);
}

