// program that the given 3 no in asc or descending
#include<stdio.h>
  main()
  {
   int a,b,c;
   printf("enter any 3 numbers");
   scanf("%d%d%d",&a,&b,&c);
   if(a<b && a<c)
   {
       printf("\t%d",a);
         if(b<c)
           printf("\t%d",b);
          else
           printf("\t%d",c);
       if(b<c && b<a)
          printf("\t%d",b);
          else
            printf("\t%d",c);
     }
       else
     {
      if(b<a && b<c)
      {
        printf("\t%d",b);
         if(a<c)
         printf("\t%d",a);
         else
          printf("\t%d",c);
          if(a>c && a>b)
            printf("\t%d",a);
            else
            printf("\t%d",c);
      }
      else
    {
      if(c<a && c<b);
      {
        printf("\t%d",c);
        if(a<b)
        printf("\t%d",a);
         else
          printf("\t%d",b);
          if(a>b && a>c)
            printf("\t%d",a);
            else
                printf("\t%d",c);
        }
     }
     }
}

