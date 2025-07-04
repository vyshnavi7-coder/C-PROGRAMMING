//program to design an application for a restaurant
# include<stdio.h>
main()
{
    int no,price,plates,total;
    no=price=plates=total=0;

    printf("Enter a number (1-5): ");
    scanf("%d",&no);

    printf("Enter no. of plates : ");
    scanf("%d",&plates);

    switch(no)
    {
        case 1 : price = 25 ;
        break;
        case 2 : price = 50 ; break;
        case 3 : price = 20 ; break;
        case 4 : price = 25 ; break;
        case 5 : printf("Exit.."); break;
        default : printf("Invalid Choice");

        printf("Enter no. of plates : ");
        scanf("%d",&plates);
    }

    total = price * plates ;
    printf("\nTotal Bill  is : %d",total);
    }

