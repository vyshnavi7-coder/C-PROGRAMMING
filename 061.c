//program to arithmetic operation
#include<stdio.h>
main()
{
 int a,b,c;
 char opt;

  printf("enter no:");
  scanf("%d",&a);
  printf("enter another no:");
  scanf("%d",&b);
  printf("enter a opt:");
  fflush(stdin);
  scanf("%c",&opt);

    switch(opt)
  {
    case '+' :c=a+b; break;
    case '-' :c=a-b; break;
    case '*' :c=a*b; break;
    case '/' :c=a/b; break;
    case '%' :c=a%b; break;
  }
  if(opt == '+'|| opt == '-'|| opt == '*'|| opt == '/'|| opt == '%')
      printf("the result is:%d",c);
}

