//program to read names and marks of 3 students, display who is topper along with marks
#include<stdio.h>
main()
{
char name1[50],name2[50],name3[50];
int m1,m2,m3;

printf("Enter first student name & marks:");
scanf("%s%d",&name1,&m1);

printf("Enter second student name & marks:");
scanf("%s%d",&name2,&m2);

printf("Enter third student name & marks:");
scanf("%s%d",&name3,&m3);

if(m1>m2&&m1>m3)
printf("%s is the topper and scored %d marks..",name1,m1);
else
    if(m2>m3)
    printf("%s is the topper and scored %d marks..",name2,m2);
    else
        printf("%s is the topper and scored %d marks..",name3,m3);
}

