//program to calculate area of circle
#include <stdio.h>
#define PI 3.14159

double calculateArea(double radius);

 main()
{
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = calculateArea(radius);

    printf("Area of the circle with radius %.2lf = %.2lf\n", radius, area);
}
double calculateArea(double radius)
 {
    return PI * radius * radius;
}

