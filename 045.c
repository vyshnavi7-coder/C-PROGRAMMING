//program to check weather the person is eligible for bonus or not
# include<stdio.h>
main()
{
    char gen,m;
    int age;

    age=0;

    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Enter ur gender (M/F) : ");
    fflush(stdin);
    scanf("%c",&gen);
    printf("Enter Your Marital status (y/n) : ");
    fflush(stdin);
    scanf("%c",&m);
    if(m=='y')
        printf("Congrats!..Bonus will be given to you");
        else
        if(age>=25 && (gen=='F' || gen=='f'))
            printf("Congrats!..Bonus will be given to you");
        else
            if(age>=30 && (gen=='M'|| gen=='m'))
            printf("Congrats!..Bonus will be given to you");
            else
                printf("Bonus will not be given..");
}

