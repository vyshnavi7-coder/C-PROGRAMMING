//program which consumes a customer name and returns the password as per logic
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char name[50];
int len;

printf("Enter name:");
gets(name);
len=strlen(name);
printf("\n%d%c%c%d%d",len*2,name[len-1],name[0],len-5,((len*2)+(len-5)));
}
