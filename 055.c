//program to  find if the character is digit or not
#include<stdio.h>
main()
{
    char x;

    printf("Enter a character : ");
    scanf("%c",&x);

    if(x>=48 && x<=57)
        printf("%c is a digit",x);
        else
        printf("%c is not a digit",x);
}
