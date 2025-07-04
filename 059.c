//program to display the traffic control signal lights
#include<stdio.h> #include<ctype.h>
main()
{
    char traffic;

    printf("Enter a traffic signal color (Red(R) Yellow(Y) Green(G)) :");
    scanf("%c",&traffic);

    traffic=toupper(traffic);

    switch(traffic)
    {
        case 'R' : printf("RED Light Please Stop"); break;
        case 'Y' : printf("YELLOW Light Please Check And Go"); break;
        case 'G' : printf("GREEN Light Please Go"); break;
        default : printf("THERE IS NO SIGNAL POINT");
    }
    }

