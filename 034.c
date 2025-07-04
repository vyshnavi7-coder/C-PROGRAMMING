//program to display the view from a building
#include<stdio.h> main()
{
    int floor;

    printf("Enter Floor Number : ");
    scanf("%d",&floor);

    if(floor<=50 && floor%2==0)
        printf("Heyy you have ""Beach View"" for your Flat.");
        else
        if(floor%2!=0 && floor<=50)
            printf("Heyy you have ""Forest view"" for your Flat.");
            else
            printf("We only have ""50 floors""");

   printf("\n");
}

