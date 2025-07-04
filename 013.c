//program to calculate gross salary and net salary from the input basic salary,allowances and deductions.
#include<stdio.h>
main()
{
    int basic,allowance,deduction,gross,net;
    basic=allowance=deduction=gross=net=0;

    printf("Enter basic salary: ");
    scanf("%d",&basic);

    printf("Enter allowance: ");
    scanf("%D",&allowance);

    printf("Enter deduction: ");
    scanf("%d",&deduction);

    gross=basic+allowance;
    net=gross-deduction;

    printf("gross salary is: %d",gross);
    printf("\nnet salary is: %d",net);

    printf("\n");
}

