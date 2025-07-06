//program which reads 10 names and find largest name

#include<stdio.h>
main()
{
    char name[10][20];
    int i,l,pos;
    pos=l=0;

    for(i=0;i<10;i++)
    {
        printf("enter %d name:",i+1);
        gets(name[i]);
    }
 for(i=0;i<10;i++)
 {
     if(strlen(name[i])>l)
     {
         l=strlen(name[i]);
         pos=i;
     }
 }
 printf("the lengthiest name is :%s having %d characters",name[pos],l);
}


