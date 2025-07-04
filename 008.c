//program to read the name,gender,height,roll number of the person and display how many bites of memory occupied.
#include<Stdio.h>
main()
{
    char name[20],gender;
    int rollno=0;
    float height=0;

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your gender(M/F): ");
    fflush(stdin);
    scanf("%c",&gender);

    printf("Enter your roll no: ");
    scanf("%d",&rollno);

    printf("Enter your height: ");
    scanf("%f",&height);

    printf("\n size of the name is:%s",sizeof(name));
    printf("\n size of gender is: %c",sizeof(gender));
    printf("\n size of roll no is: %d",sizeof(rollno));
    printf("\n size of height is: %f",sizeof(height));

    printf("\n");

}

