// program to print date,mon,year and next date ,mon,year
  #include<stdio.h>
  main()
  {
   int d,m,y,nd,nm,ny;
   d=m=y=nd=nm=ny=0;

   printf("enter a date(dd mm yyyy):");
   scanf("%d%d%d",&d,&m,&y);

   if(y%4==0 && y%400!=0)
   {
       if(m==2)
       {
           if (d==29)
               nd=1;
               nm=m+1;
         printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,y);
       }
       else
       {
           if(d<=30)
           {
            nd=1;
            nm=m+1;
            printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,y);
           }
           else
        {
            if(m<12)
        {
          nd=1;
          nm=m+1;
          printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,y);
        }
           else
        {
          ny=y+1;
          nm=1;
          nd=1;
          printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,ny);
        }
       }
   }
  }
    else
        {
            if(d<=30)
            {
              nd=d+1;
              printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,m,y);
            }
           else
         {

         if(m<12)
         {
             nd=1;
             nm=m+1;
             printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,y);
         }
         else
         {
             ny=y+1;
             nm=1;
             nd=1;
             printf("date following %d:%d:%d is %d:%d:%d",d,m,y,nd,nm,ny);
         }
        }
        }
  }

