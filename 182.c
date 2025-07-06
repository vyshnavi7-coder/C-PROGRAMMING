//program more about scanf()

#include<stdio.h>
main()
{
    int no;
    char str[20];

    printf("enter a no:");
    scanf("%d",&no);

    printf("enter a string:");
    scanf("%s",str);
    printf("%d-%s",no,str);
}

