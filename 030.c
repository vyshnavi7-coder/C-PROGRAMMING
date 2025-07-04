//program to print absolute difference between 2 numbers
# include<stdio.h>
main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter 2 numbers which are to be subtracted : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        c=a-b;
    else
        c=b-a;

    printf("The absolute difference of %d and %d is : %d",a,b,c);
}

