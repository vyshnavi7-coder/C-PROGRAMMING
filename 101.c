//program to search for an elements in 5*5 matrix
#include<stdio.h>
main()
{
 int matrix[5][5]={

 {1,2,3,4,5},
 {6,7,8,9,10},
 {11,12,13,14,15},
 {16,17,18,19,20},
 {21,22,23,24,25}
 };
 int target;

 printf("enter the element to search:");
 scanf("%d",&target);

 int found=0;
 for(int i=0;i<5;i++)
 {
 for(int j=0;j<5;j++)
 {
 if(matrix[i][j]==target)
 {
  printf("element found at position(%d,%d)\n",i,j);
  found=1;
  break;
 }
 }
 if(found)break;
 }
 if(!found)
 {
 printf("elements not found in the matrix \n");
 }
}

