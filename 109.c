//program to fill the array of N elements of multiples of 5 and copy to another array and print

#include<stdio.h>
main()
{
 int N;

 printf("enter no of elements (N):");
 scanf("%d",&N);

  int arr1[N];
  int arr2[N];

  for(int i=0;i<N;i++)
  {
   arr1[i]=(i+1)*5;
  }
  for(int i=0;i<N;i++)
  {
   arr2[i]=arr1[i];
  }
 printf("array 1:");
 for(int i=0;i<N;i++)
 {
  printf("%d\t",arr1[i]);
 }
 printf("\n array 2:");
 for(int i=0;i<N;i++)
 {
 printf("%d\t",arr2[i]);
 }
 printf("\n");
}

