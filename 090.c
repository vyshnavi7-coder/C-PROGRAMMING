//program to find HCF  of 2 no

 #include<stdio.h>
 main()
 {
   int a,b,hcf,lowest;
    a=b=hcf=lowest=0;

 printf("enter 2 nos:");
 scanf("%d%d",&a,&b);

  if(a<b)
   lowest=a;
  else
   lowest=b;

   for(hcf=lowest;hcf>=1;hcf--)
    {
     if(a%hcf==0 && b%hcf==0 )
      {
       printf("hcf of %d and %d is %d",a,b,hcf);
       break;
      }
    }
 }

