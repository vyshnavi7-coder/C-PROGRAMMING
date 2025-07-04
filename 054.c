//program to accept a grade and declare equivalent description
#include<stdio.h> #include<ctype.h>
main()
{
    char grade;

    printf("What is Your Grade : ");
    scanf("%c",&grade);

    grade=toupper(grade);

    switch(grade)
    {
        case 'S' : printf("SUPER!.."); break;
        case 'A' : printf("VERY GOOD.."); break;
        case 'B' : printf("FAIR"); break;
        case 'Y' : printf("ABSENT"); break;
        case 'F' : printf("FAIL"); break;
        default : printf("Enter Valid Grade ");
    }
    }

