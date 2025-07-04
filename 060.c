//program to accept a grade and display equivalent description
#include<stdio.h> #include<ctype.h> main()
{
    char grade;

    printf("Input Your Grade : ");
    scanf("%c",&grade);

    grade = toupper(grade);

    switch(grade)
    {
        case 'E' : printf("Excellent"); break;
        case 'V' : printf("Very Good"); break;
        case 'G' : printf("Good"); break;
        case 'A' : printf("Average"); break;
        case 'F' : printf("Fail"); break;
        default : printf("Enter valid Grade");
    }

