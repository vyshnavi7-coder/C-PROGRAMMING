//program to check weather a character is capital letter or lower letter or digit or special character
#include<stdio.h> main()
{     int ch;

    printf("Input a Character : ");
    scanf("%c",&ch);

    if(ch>65 && ch<90)
        printf("%c is Upper case Alphabet ",ch);
        else
        if(ch>97 && ch<122)
          printf("%c is Lower case Alphabet ",ch);
          else
            if(ch>48 && ch<57)
                printf("%c is a Digit",ch);
            else
                printf("%c is a special character",ch);
}

