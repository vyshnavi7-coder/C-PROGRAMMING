//program which consumes a customer name and ph num and should return code
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
 char name[30]="",phno[30]="",res[50]="";
 int i;

 printf("enter customer name:");
 scanf("%s",&name);
 printf("enter ph no:");
 scanf("%s",&phno);
 res[0]=name[0];
 for(i=1;name[i]!='\0';i++);
 res[1]=name[++i];
 res[2]='-';
 strcat(res,phno);
 printf("\n code=%s",res);
}
