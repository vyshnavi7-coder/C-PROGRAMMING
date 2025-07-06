//program to print next occurence of the each character in a given string
#include<stdio.h>
main()
{
    char str[20];
    int i;

    printf("enter a string:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
        putchar(str[i]+1);
}

