//program in C to accept a grade and declare the equivalent description

#include<stdio.h>
main()
{
    char opt;

    printf("enter a character:");
    scanf("%c",&opt);

    switch(opt)
    {
     case 'E': printf("Excellent");break;
     case 'V': printf("Very good");break;
     case 'G': printf("Good");     break;
     case 'A': printf("Average");  break;
     case 'F': printf("Fail");
        break;
     default: printf("invalid");
    }
}

