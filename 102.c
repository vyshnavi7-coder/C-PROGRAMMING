//program to print diagonal elements of a square matrix(5*5)
#include<stdio.h>
main()
{
 int matrix [5][5]={
 {1,2,3,4,5},
 {6,7,8,9,10},
 {11,12,13,14,15},
 {16,17,18,19,20},
 {21,22,23,24,25}
 };
 printf("diagonal elements:");
 for(int i=0;i<5;i++)
 {
  printf("%d\t",matrix[i][i]);
 }
 printf("\n");
}

