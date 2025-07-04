//program to prepare electricity bill
#include<stdio.h>
main()
{
    int unit;
    char cat;
    float price,bill;
    unit=price=bill=0;

    printf("Enter number of units consumed : ");
    scanf("%d",&unit);
    printf("Enter Your Category (Domestic(d)/Commercial(c)) : ");
    fflush(stdin);
    scanf("%c",&cat);

    if(cat=='d')
    {
        if(unit<100)
            price = 1.00;
        else
            if(unit>=100 && unit<200)
              price = 1.50;
        else
            if(unit>=200 && unit<300)
                  price = 3.00;
                  else
                    if(unit>=300)
                   price = 5.00;
    }
    else
    {
        if(unit<100)
            price = 1.50;
        else
            if(unit>=100 && unit<200)
            price = 2.50;
            else
                if(unit>=200 && unit<300)
                price = 4.50;
                else
                    if(unit>=300)
                    price = 7.50;
    }

    bill= price * unit ;

    printf("\nThe Total Bill is %f",bill);

    printf("\n");
}

