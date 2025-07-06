//program to read price of 1 dozen of apples,and calculate price of 1 apple
#include<stdio.h>
main()
{
int dozenapples,eachapple;
dozenapples=eachapple=0;

printf("Enter price of 1 dozen apples:");
scanf("%d",&dozenapples);

eachapple=dozenapples/12;
printf("price of each apple is:%d",eachapple);
printf("\n");
}

