//program to print fibonacci no till 100
  #include<stdio.h>
  main()
  {
    int a,b,c;
    a=1;
    b=c=0;
    while(c<100)
    {
     c=a+b;
     printf("\t%d",b);
     a=b;
     b=c;
    }
  }

