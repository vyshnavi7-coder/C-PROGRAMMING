//adding 2 nos with using functions

#include<stdio.h>
main()
{
    int add(int,int);
    int a,b,c;
    a=b=c=0;

    printf("enter 2 nos:");
    scanf("%d%d",&a,&b);

    c=add(a,b);
    printf("result is:%d",c);
}
int add(int x, int y)
{
    int z;
    z=x+y;
    return(z);
}

