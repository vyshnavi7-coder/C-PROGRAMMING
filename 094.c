//program to keep reading num from the user till the input is 0,and count nos of even and odd nos along with sum
 #include<stdio.h>
 main()
 {
  int no,ec,oc,es,os;
  no=ec=oc=es=os=0;
  while(1)
  {
   printf("enter a no:");
   scanf("%d",&no);
   if(no==0)
   {
    break;
   }
   if(no%2==0)
   {
    ec++;
    es+=no;
   }
   else
   {
    oc++;
    os+=no;
   }
  }
   printf("ec:%d,es:%d\n",ec,es);
   printf("oc:%d,os:%d\n",oc,os);
 }

