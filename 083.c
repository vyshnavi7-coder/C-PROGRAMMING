//program to read a positive no ad print its factorial

 #include<stdio.h>
 main()
 {
  long int no,f;
  f=1;

  printf("enter a no:");
  scanf("%ld",&no);

  while(no>=1)
   {
    f=f*no;
    no--;
   }
   printf("factorial is:%ld",f);
 }

