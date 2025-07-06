//program to read elements in the array of 4*4 matrix
#include<stdio.h>
main()
{
    int arr[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
     printf("enter a no:");
     scanf("%d",&arr[i][j]);
    }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

