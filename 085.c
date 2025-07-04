//program to read a vehical no nd check whether it is palindrome no or not

 #include<stdio.h>
 main()
 {
  long no,temp;
  int r,rev;
  no=r=rev=0;

  printf("enter a vehical no:");
  scanf("%ld",&no);
  temp=no;

  while(no>0)
  {
   r=no%10;
   rev=rev*10+r;
   no=no/10;
  }
   if(temp==rev)
     printf("%ld is palindrome....",temp);
   else
     printf("%d is not palindrome...",temp);
 }

