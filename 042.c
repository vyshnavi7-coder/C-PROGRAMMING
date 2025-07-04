//program to weather the inputted data is capital letter small letter digit or special character
#include <stdio.h>
main()
{
    char x;

    printf("Input a Character : ");
    scanf("%c",&x);

    if(x>=65 && x<=90)
        printf("%c is an Upper Case Alphabet",x);
        else
        if(x>=97 && x<=122)
           printf("%c is a Lower case Alphabet ",x);
           else
            if(x>=48 && x<=57)
                printf("%c is a Digit",x);
            else
                printf("%c is a special character",x);
}

