 // program to print sum of  1st and last digits of an inputtd

  #include<stdio.h>
  main()
  {
   int no,fd,ld,temp;

   printf("enter a integer:");
   scanf("%d",&no);

   ld=no %10;
   temp=no;
   while(temp>=10)
   {
   temp/=10;
   }
    fd=temp;
    int sum=fd+ld;

    printf("sum  of the fd and ld:%d\n",sum);
  }

