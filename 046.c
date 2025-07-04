//program to check if a passenger is eligible of concession based on a few parameters
# include<stdio.h> main()
{
    int age;
    char gen;

    printf("Enter Your Gender (M/F) : ");
    scanf("%c",&gen);

    printf("Enter Your Age : ");
    scanf("%d",&age);

    if(age<5)
        printf("You have full Concession");
        else
        if(gen=='m')
        {
           if(age>=60)
            printf("You have 50%% concession");
            else
            printf("You are not eligible for concession");
        }
        else
            if(gen=='f')
            {
                if(age>=50)
                  printf("You have 50%% concession");
                else
                  printf("You are not eligible for concession");
            }
}

