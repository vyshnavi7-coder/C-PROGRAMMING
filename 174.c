//program to copy one string to another string

#include<stdio.h>
main()
{
    char str[20],tar[20];
    int i;

    printf("enter a string:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
        tar[i]=str[i];

    tar[i]='\0';
    printf("\n copied string is:%s",tar);
}

