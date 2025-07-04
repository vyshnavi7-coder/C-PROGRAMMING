//write a program to print ASCII chart
#include<stdio.h>
main()
{
  int no;
  for(no>1;no<=255;no++)
  {
   printf("%d-%c\t",no,no);
  }
}

