//program to accept the height of a person in centimeter and categorize it
#include<stdio.h>
main() .
{
    float h;

    printf("Enter ur height in cm : ");
    scanf("%f",&h);

    h = h / 30.48 ;

    printf("You're height is : %.3f",h);

    if(h>5.5)
        printf("\nYou are Tall!");
    else
    if(h<4.5)
    printf("\nYou are a Dwarf");
    else
            printf("\nAverage Height..");
}

