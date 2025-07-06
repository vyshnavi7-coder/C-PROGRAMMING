//program that would find the count of occurrences of largest digit in the input number

 #include<stdio.h>
 main()
 {
      long int no,d,i,c,t;
      i=c=0;

      printf("enter a no:");
      scanf("%ld",&no);

      for(t=no;t>0;t/=10)
      {
          d=t%10;
          if(i==d)
            c++;
          if(i<d)
          {
              c=1;
              i=d;
          }
      }
    printf("\n largest digit %ld occur %ld times",i,c);
 }

