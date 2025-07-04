//program to calculate net and gross salary and bonus based on experience
#include<stdio.h>
main()
{
    int exp;
    float basic,allowance,ded,gross,net,bonus;

    printf("Input Basic Salary : ");
    scanf("%f",&basic);

    printf("Input Allowance : ");
    scanf("%f",&allowance);

    printf("Input Deductions : ");
    scanf("%f",&ded);

    printf("What's Your Experience : ");
    scanf("%d",&exp);

    gross = basic + allowance;
    net = gross - ded;

    if(exp>=5)
        bonus = 3 * net ;
    else
        if(exp>3 && exp<5)
        bonus = 2 * net ;
    else
        bonus = 1 * net;

    printf("Gross: %.3f",gross);
    printf("Net : %.3f",net);
    printf("Bonus : %.2f",bonus);
}

