// program  to  prepare eletricity bill.

 #include<stdio.h>
 main()
 {
   int pre,last,uc,e;
   float amt;
   char cat;
   pre=last=uc=amt=e=0;
   printf("enter present month reading:");
   scanf("%d",&pre);
   printf("enter last month reading:");
   scanf("%d",&last);
   printf("enter catagory:");
   fflush(stdin);
   scanf("%d",&cat);

   uc=pre-last;
   if(cat=='d' || cat=='D')
   {
     if(uc<=100)
      amt=100;
     else
       if(uc<=200)
      {
       e=uc-100;
       amt=100+e*1.5;
      }
     else
      if(uc<=300)
      {
        e=uc-200;
        amt=100+150+e*3;
      }
     else
      {
        e=uc-300;
        amt=100+150+300+e*5;
      }
   }
   /*end of if block*/
   else
   {
    if(uc<=100)
    amt=150;
   else
     if(uc<=200)
     {
      e=uc-100;
      amt=150+e*2.5;
     }
  else
    if(uc<=300)
    {
     e=uc-200;
     amt=120+250+e*4.5;
    }
  else
    {
     e=uc-300;
     amt=150+250+450+e*7.5;
    }
   }
    printf("amt is:%f",amt);
 }

