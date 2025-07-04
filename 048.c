//program to calculate total and avg of 3 subjects and check if they passed or not
#include<stdio.h> main()
{
    int c,cpp,java;
    float tot,avg;
    printf("Enter your C Marks : ");
    scanf("%d",&c);
    printf("Enter your C++ Marks : ");
    scanf("%d",&cpp);
    printf("Enter your Java Marks : ");
    scanf("%d",&java);

    tot = c+cpp+java;
    avg = tot/3;

    printf("\nYour Total is : %f ",tot);
    printf("\nYour Average is : %f%%",avg);

    if(c>=40 && cpp>=40 && java>=40)
        printf("\nYou are Passed!!..");
    else
        if(c<40)
            printf("\nYou are failed in C \nNo Grade");
    else
        if(cpp<40)
            printf("\nYou are failed in C++ \nNo Grade");
    else
        if(java<40)
                printf("\nYou are failed in Java \nNo Grade");
}

