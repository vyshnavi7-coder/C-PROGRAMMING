//program to read ratings of 3 movies and display which is hit movie
# include<stdio.h> main()
{
    int r1,r2,r3;
    r1=r2=r3=0;

    printf("Enter the ratings of the movie RRR (1-10) : ");
    scanf("%d",&r1);
    printf("Enter the ratings of the movie Dhangal (1-10) : ");
    scanf("%d",&r2);
    printf("Enter the ratings of the movie Krish 3 (1-10) : ");
    scanf("%d",&r3);

    if(r1>r2 && r1>r3)
        printf("RRR is Hit");
    else
        if(r2>r1 && r2>r3)
        printf("Dhangal is hit");
        else
            if(r3>r1 && r3>r2)
            printf("Krish 3 is hit");
            else
                printf("The 3 movies are hit");
}

