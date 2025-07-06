//program to join 2 strings and store it into the 3rd string

#include<stdio.h>
main()
{
    char str1[20],str2[20],str3[40];
    int i,j;

    printf("enter 1st string:");
    scanf("%s",&str1);
    printf("enter 2nd string:");
    fflush(stdin);
    scanf("%s",&str2);

    for(i=0,j=0;str1[i]!='\0';i++,j++)
        str3[j]=str1[i];

    str3[j++]="NULL";

    for(i=0;str2[i]!='\0';i++,j++)
      str3[j] =str2[i];

    str3[j]='\0';
    printf("\ncopied string is:%s",str3);
}

