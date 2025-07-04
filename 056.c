//program to read two integer values and peint up or down accordingly
# include<stdio.h>
main()
{
    int a,b;

    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another Number : ");
    scanf("%d",&b);

    if(a<b)
        printf("up");
    else
        if("a>b")
            printf("Down");
        else
            printf("Equal");

   printf("\n");
}

