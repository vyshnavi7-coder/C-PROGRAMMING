//program to check weather the person is eligible for bonus or not
# include<stdio.h> #include<ctype.h>
main()
{
    char gen,m;
    int age;
    age=0;

    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Enter ur gender (M/F) : ");
    fflush(stdin);     scanf("%c",&gen);
    printf("Enter Your Marital status (y/n) : ");
    fflush(stdin);
    scanf("%c",&m);

    gen=tolower(gen);
    m=tolower(m);

    if(m=='y')
    {
        printf("Congrats!..Bonus will be given to you");
    }
    else
    {
        if(gen=='f')
        {
            if(age>25)
            {
                printf("Bonus will  be given..");
            }
            else
            {
                printf("Bonus will not be given to you");
            }

        }
        else
        {
            if(gen=='m')
            {
              if(age>30)
              {


                printf("Bonus will be given..");
              }
              else
              {
                printf("Bonus will not be given to you");
              }
            }
        }
    }
    return 0;
}

