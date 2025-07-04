//program to read the temp in farenheit and convert into centigrade.
#include<stdio.h>
main()
{
    double  farenheit,centigrade;

    printf("Enter temp in farenheit: ");
    scanf("%lf",&farenheit);

    centigrade=('farenheit'-32)*5/9;

    printf("Temp in centigrade is:%lf",centigrade);

    printf("\n");
}

