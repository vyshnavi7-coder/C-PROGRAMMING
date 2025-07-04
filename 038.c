//program to calculate electricity bill for a customer
#include<stdio.h>
main()
{
    char name[10];
    int id,units;
    float charge,amount,surcharge,net;
    printf("Input Customer Id : ");
    scanf("%d",&id);
    printf("Input Customer Name : ");
    scanf("%s",&name);
    printf("Input Units Consumed : ");
    scanf("%d",&units);
    if(units<199)
    {
        charge=1.20;
    }
    else     {
        if(units>=200 && units<400)
          charge=1.50;         else
            if(units>=400 && units<600)
            charge=1.80;
            else
            if(units>600)
                charge=2.00;
    }
    amount = units * charge ;

    if(amount>400)
    {
      surcharge = amount * 15 /100;
    }
   net = amount+surcharge;
   printf("\nCustomer IDNO :%d ",id);
   printf("\nCustomer Name : %s",name);
   printf("\nUnits Consumed : %d",units);
    printf("\n\nAmount Charges @Rs.%.2f per unit: %.2f",charge,amount);
    printf("\nSurcharge Amount : %.2f",surcharge);
    printf("\n\nNet Amount Paid by the Customer : %.2f",net);
}


