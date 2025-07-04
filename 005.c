//5.program to read the basic salary of an employee and display gross salary and net salary.
#include<stdio.h>

main()
{
    int basic,hra,pf,da,gross,net;

    printf("Enter your basic salary: ");
    scanf("%d",&basic);

    hra=(0.2)*basic;
    pf=(0.05)*basic;
    da=(0.1)*basic;

    gross=basic+hra+da;
    net=gross-pf;

    printf("%d is gross salary",gross);
    printf("\n %d is net salary",net);

    printf("\n");
}

