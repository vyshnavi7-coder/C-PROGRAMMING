//program to print biggest of 2 # include <stdio.h>
main()
{
    int cost1,cost2;

    printf("Enter The price of Samsung mobile : ");
    scanf("%d",&cost1);
    printf("Enter The price of Vivo mobile : ");
    scanf("%d",&cost2);

    if(cost1>cost2)
        printf("Samsung is costlier");

    else
    {
        if(cost2>cost1)
            printf("Vivo is costlier");
         else
            printf("Both are at Same Price..");
    }
}

