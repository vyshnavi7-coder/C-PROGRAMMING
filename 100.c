//program to fill the array of 10 elements with random no and sort them in ass order and des order separately

#include<stdio.h>
#include<time.h>
main()
{
 int x,j,i,t,arr[10];

 srand(time(0));
 for(i=0;i<=9;i++)
{
    arr[i]=rand()%100;
}
 for(i=0;i<=9;i++)
 printf("%d\n",arr[i]);

printf("ass order\n:");
  for(i=0;i<=9;i++)
 {
  for(j=0;j<=9-i;j++)
 {
  if(arr[j]>arr[j+1])
  {
     t=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=t;
  }
 }
 }
 for(i=0;i<=9;i++)
   printf("%d\n",arr[i]);

 printf("dec order:\n");
 for(i=0;i<=9;i++)
 {
  for(j=0;j<=9-i;j++)
  {
      if(arr[j]<arr[j+1])
      {
          t=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=t;
      }
  }
 }
  for(i=0;i<=9;i++)
 {
    printf("%d\n",arr[i]);
 }
}

