// program to fill the array of N elements with even nos

#include<stdio.h>
main()
{
    int arr[100],i,no,e=2;

    printf("enter array size:");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        arr[i]=e;
        e+=2;
    }
    for(i=0;i<no;i++)
        printf("\n element at %d is %d..",i,arr[i]);
}

