//program to generate 10 random no and display the biggest one

 #include<stdio.h>
 main()
 {
 int c,no,big;
 c=no=big=0;

 for(c=1;c<=10;c++)
 {
  printf("enter a no:");
  scanf("%d",&no);

  if(no>big)
  big=no;
 }
  printf("biggest no is:%d",big);
 }

