//program to read the elements in the array of 3*3 matrix

#include<stdio.h>
main()
{
    int arr[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          printf("enter a no:");
          scanf("%d",&arr[i][j]);
      }
    }
     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          printf("\t%d",arr[i][j]);
      }
    printf("\n");
}
}

