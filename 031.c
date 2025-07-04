//program to calculate profit or loss or no loss no profit
# include<stdio.h> main()
{
    int cp,sp,x;
    cp=sp=x=0;

    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter Selling Price : ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        x = sp - cp;
        printf("Heyy, You have made a Profit of Rs.%d/-",x);

    }
    else
       {
           if(cp>sp)
           {
               x = cp - sp;
               printf("Oops!, You incurred a Loss of Rs.%d/-");
           }
           else
            printf("Hmmm!,No Loss..No Profit..");
       }
    printf("\n");
}

