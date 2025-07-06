//program to print following series
#include<stdio.h>
main()
{
    int no,i;
    no=1;
    i=0;

    while(no<=100)
    {
      printf("\t%d",no);
      no=no+i++;
    }
}

