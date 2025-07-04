//program to find biggest of 4 numbers
# include<stdio.h>
main()
{
int a,b,c,d;

    printf("Enter four numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
        printf("%d is biggest",a);
    else
       {
         if(b>a && b>c && b>d)
         printf("%d is biggest",b);
         else
            if(c>a && c>b && c>d)
            printf("%d is biggest",c);
          else
                printf("%d is biggest",d);
       } }

