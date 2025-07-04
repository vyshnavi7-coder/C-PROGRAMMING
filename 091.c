//program to find LCM  of 2 no

 #include<stdio.h>
 main()
 {
   int a,b,lcm,highest;
    a=b=lcm=highest=0;

 printf("enter 2 nos:");
 scanf("%d %d",&a,&b);

 highest=(a>b)?a:b;
  while(1)
  {
      if(highest%a == 0 && highest%b == 0)
      {
        lcm=highest;
        break;
      }
        ++highest;
  }
       printf("lcm of %d and %d is %d\n",a,b,lcm);
 }

