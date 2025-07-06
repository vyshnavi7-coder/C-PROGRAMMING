//program to count number of words from the inputted string

#include<stdio.h>
main()
{
    char str[100];
    int i,w=1;

    printf("enter a string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\0')
            w++;
    }
    printf("no of words are:%d",w);
}

