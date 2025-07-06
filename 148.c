//program to work with string function
#include<stdio.h>
#include<string.h>
main()
{
    char str[20];
    printf("enter a string:");
    scanf("%s",&str);

    printf("\n length of the string is:%d",strlen(str));
    printf("\n string in uppercase is %s",strupr(str));
    printf("\n string in lowercase is %s",strlwr(str));
    printf("\n string in reverse order is %s",strrev(str));
}

