//program to accept a string and display character by character
#include<stdio.h>
main()
{
    char str[20];
    int i;

    printf("enter a string:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        printf("\n%c",str[i]);
    }
}

