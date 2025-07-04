// program to print result for the input based and power

 #include<stdio.h>
 #include<math.h>
 main()
 {
   int base,res;
   int power;

   printf("enter the base:");
   scanf("%d",&base);
   printf("enter the power:");
   scanf("%d",&power);

   res=pow(base,power);

   printf("res of %d raised to the power of %d is:%d\n",base,power,res);
 }

