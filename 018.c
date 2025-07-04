//write a program to read total travelling in kilo meters and display into meters.
#include<stdio.h>
main()
{
    float kilometer;

    printf("Enter the distance in kilometer: ");
    scanf("%f",&kilometer);

    float meters=kilometer*1000;
    printf("distance in meters: %.2fmeters \n",meters);

    printf("\n");
}

