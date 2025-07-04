//program to calculate total and average marks of 3 subjects and display the grade
#include<stdio.h>
main()
{
    int s1,s2,s3;
    float tot,avg,grade;

    printf("Enter marks of 3 subjects : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    tot = s1+s2+s3;
    avg = tot/3;

    printf("Total Marks of the 3 subjects is : %.1f",tot);
    printf("\nAverage of the 3 subjects is : %.3f",avg);

    if(avg>=90)
        printf("\nGrade : A+");
    else
        if(avg>=80 && avg<90)
            printf("\nGrade : A");
        else
            if(avg>=70 && avg<80)
              printf("\nGrade : B+");
              else
                if(avg>=60 && avg<70)
                    printf("\nGrade : B");
                else
                    if(avg>=50 && avg<60)
                    printf("\nGrade : C");
                    else
                        printf("\nGrade : F");
}

