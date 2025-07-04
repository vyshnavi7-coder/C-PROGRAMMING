//program to read age of a person and print if eligible for voting or not
#include<stdio.h>
main()
{     int age;

    printf("Enter Your Age : ");
    scanf("%d",&age);

    if(age>=18)
        printf("You are Eligible to Vote..");
    else
        printf("You are Not Eligible to Vote..");

    printf("\n");
}


