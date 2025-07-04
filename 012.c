//program to read radius of a circle and calculate area.
#include<stdio.h>
main()
{
    float radius,area;
    radius=area=0;
    const float PI=3.14;

    printf("Enter radius: ");
    scanf("%f",&radius);

    area=PI*radius*radius;
    printf("area of a circle is:%.2f",area);

    printf("\n");
}

