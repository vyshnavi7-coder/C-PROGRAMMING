//program to check if a number is divisible by both 3 and 5
# include<stdio.h>
main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%3==0 && num%5==0)
        printf("%d is divisible by both 3 and 5",num);
        else
        printf("%d is not divisible",num);
}

