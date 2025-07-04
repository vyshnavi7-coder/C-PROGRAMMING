//program to generate discount according to the sales
# include<stdio.h> main()
{     int sales;
    float billamt,dis;

    printf("Enter The Sales : ");
    scanf("%d",&sales);

    if(sales>25000)
         dis = sales * 10/100 ;

    else
        dis = sales  *5/100 ;

    billamt = sales-dis;
    printf("The Final Amount is : %.2f",billamt);

}

