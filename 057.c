//program to print 3 integers in descending order
#include<stdio.h>
main()
{     int a,b,c;

    printf("Enter 3 Numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n%d",a);
        if(b>c)
            printf("\n%d",b);
        else
        printf("\n%d",c);
        if(b<a && b<c)
            printf("\n%d",b);
        else
            printf("\n%d",c);
    }
    else
    {
        if(b>a && b>c)
        {
            printf("\n%d",b);
            if(a>c)
                printf("\n%d",a);
            else
            printf("\n%d",c);
            if(a<b && a<c)
                printf("\n%d",a);
            else
                printf("\n%d",c);
        }         else
            if(c>a && c>b)
        {
            printf("\n%d",c);
            if(a>b)
                printf("\n%d",a);
            else
            printf("\n%d",b);
            if(a<b && a<c)
                printf("\n%d",a);
            else
                printf("\n%d",b);
        }
    } }

