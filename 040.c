//program to print the discount and actual amount
# include<stdio.h>
main()
{     int sales,dis;
    float actual;

    printf("Input the sales amount : ");
    scanf("%d",&sales);

    if(sales>=25000)
        dis = sales * 25/100;
    else
        if(sales>=20000 && sales<25000)
        dis = sales * 20/100;
        else
            if(sales>=10000 && sales<20000)
            dis = sales * 10/100;
       else
           if(sales>=5000 && sales<10000)
           dis = sales * 5/100;

    actual = sales - dis;

    printf("Actual Amount is %f",actual);
}

