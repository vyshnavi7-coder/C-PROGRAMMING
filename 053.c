//program to do arithmetic operations using switch case
#include<stdio.h>
main()
{
    int a,b;
    float c;
    char opt;
    a=b=c=0;

    printf("Enter a no : ");
    scanf("%d",&a);
    printf("Enter Another no : ");
    scanf("%d",&b);

    printf("\nEnter your Option (+,-,*,/) : ");
    fflush(stdin);
    scanf("%c",&opt);

    switch(opt)
    {
        case '+' :
            {
        c = a+b ;
            }
        break;
        case '-' : c = a-b ; break;
        case '*' : c = a*b ; break;
        case '/' : c = a/b ; break;
        default : printf("Invalid Choice");
    }

    if(opt=='+' ||opt=='-' || opt=='*' || opt=='/')
        printf("The Result is : %.2f",c);
}

