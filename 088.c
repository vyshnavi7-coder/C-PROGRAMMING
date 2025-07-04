// program to print all the armstrong no btw 100 and 1000

 #include<stdio.h>
 main()
 {
  int no,temp,sum,fir,sec,thi;
  temp=sum=fir=sec=thi=0;

  for(no=101;no<1000;no++)
{
     temp=no;
     thi=no%10;
     no=no/10;
     sec=no%10;
     no=temp;
     fir=no/100;

   fir=fir*fir*fir;
   sec=sec*sec*sec;
   thi=thi*thi*thi;

    sum=fir+sec+thi;

    if(sum==no)
    {
      printf("\t%d",sum);
    }
 }
 }

