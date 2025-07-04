//1.program to read the bill amt and the amount paid by the customer,and then display the balance amount to be returned to the customer.
#include<stdio.h>
main()
{
    int billamt,amountpaid,returnedamt;

     //input:
     printf("enter the total bill amount:");      scanf("%d",&billamt);

     printf("enter the amount paid:");      scanf("%d",&amountpaid);

    //output:
     returnedamt=amountpaid-billamt;

     printf("returned amt is:%d",returnedamt);

     printf("\n");
}
