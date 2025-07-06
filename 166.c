//person wants to travel from his home city to another metro city calculate how much he spent to reach from his home to destination city
#include<stdio.h>
main()
{
int cabfare,airfare,totalfare;

printf("Enter cab fare...:");
scanf("%d",&cabfare);
printf("Enter air fare...:");
scanf("%d",&airfare);

totalfare=cabfare+airfare;
printf("total fare amount spend by person to reach destination city is:%d",totalfare);
printf("\n");
}

