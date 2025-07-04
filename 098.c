//program to read array of N elements and print total & avg

#include<stdio.h>
main()
{
  int arr[100],i,no;
  float tot,avg;
  tot=avg=0;

  printf("enter size of array:");
  scanf("%d",&no);

  for(i=0;i<no;i++)
  {
   printf("enter a no:");
   scanf("%d",&arr[i]);
  }
  for(i=0;i<no;i++)
  tot+=arr[i];

  avg=tot/no;
  printf("\n sum is:%f",tot);
  printf("\n avg is:%f",avg);
}

