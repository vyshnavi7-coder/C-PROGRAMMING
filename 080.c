// program to check inputted no is perfect no or not

#include<stdio.h>
main()
{
  int no=0,sum=0;
  int c;

  printf("enter input:");
  scanf("%d",&no);

  for(c=1;c<no;c++)
     {
      if(no%c==0)
        {
           sum=sum+c;
        }
     }
    if(sum=no)
        printf("perfect no is %d",no);
    else
    printf("%d is not a perfect no",no);
}

