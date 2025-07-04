//program to accept a grade and declare the equivalent description

#include<stdio.h>
main()
{
 char opt;

 printf("enter a character:");
 scanf("%c",&opt);

 switch(opt)
 {
   case'S':printf("Super");break;
   case'A':printf("very good");break;
   case'B':printf("Fair");break;
   case'Y':printf("Absent");break;
   case'F':printf("Fails");break;
   default:printf("invalid");
 }
}

