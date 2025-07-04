//program to read dob in "MMDDYYYY" format,find lucky no and display suitable gemstone for that person

 #include<stdio.h>
  main()
  {
   int dob,temp,sum,i,d;
   dob=temp=sum=d=0;

   printf("enter ur dob(mm/dd/yyyy):");
   scanf("%d",&dob);

   for(i=1;i<=8;i++)
   {
       d=dob%10;
       temp=temp+d;
       dob=dob/10;
   }
   while(temp>=1)
   {
       d=temp%10;
       sum=sum+d;
       temp=temp/10;
   }
   printf("ur lucky no is: %d\n",sum);

   switch(sum)
   {
     case 1: printf("ur gemstone is garnet\n");break;
     case 2: printf("ur gemstone is amethyst\n");break;
     case 3: printf("ur gemstone is aquamarine\n");break;
     case 4: printf("ur gemstone is diamond\n");break;
     case 5: printf("ur gemstone is emerald\n");break;
     case 6: printf("ur gemstone is pearl\n");break;
     case 7: printf("ur gemstone is ruby\n");break;
     case 8: printf("ur gemstone is peridot\n");break;
     case 9: printf("ur gemstone is sapphire\n");break;
     default:printf("not given");
   }
  }
