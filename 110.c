//program to delete from the array of N elements
#include<stdio.h>
main()
{
    int arr[100];
    int N,i,no,del;

    printf("enter the no.of elements(N):");
    scanf("%d",&N);

    printf("enter the elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("enter the element to delete:");
   scanf("%d",&no);

   printf("enter a position to delete(1-%d):",N);
   scanf("%d",&del);

   for(i=del-1;i<N-1;i++)
   {
       arr[i]=arr[i+1];
   }
   N--;
   printf("array after deletion:");
    for(i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

