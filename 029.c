//program to arrange 3 numbers in ascending order
# include<stdio.h> main()
{
    int a,b,c;

    a=b=c=0;

    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)
    {
        printf("%d\t",a);

        if(b<c)
            printf("%d\t",b);
        else
            printf("%d\t",c);
        if(c>a && c>b)
            printf("%d\t",c);
        else
            printf("%d\t",b);
    }
    else
    {
        if(b<a && b<c)
        {
            printf("%d\t",b);
             if(a<c)
                printf("%d\t",a);
            else
                printf("%d\t",c);
            if(a>c && a>b)
                printf("%d\t",a);
            else
                printf("%d\t",c);
        }         else
        if(c<a && c<b)
        {
            printf("%d\t",c);
             if(a<b)
                printf("%d\t",a);
             else
                printf("%d\t",b);
             if(a>b && a>c)
                printf("%d\t",a);
                else
                printf("%d\t",b);
        }
    }

printf("\n");
}
