// program to print upper triangle and lower triangle of 5*5 array

  #include<stdio.h>
  main()
  {
   int arr[5][5],i,j;

   printf("enter 5*5 matrix:\n");

   for(i=0;i<5;i++)
   {
    for(j=0;j<5;j++)
    {
     scanf("%d",&arr[i][j]);
    }
   }
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
            printf("%d\t",arr[i][j]);
       }
       printf("\n\n");
   }
     printf("\n lower triangle is:\n");
   for(i=0;i<5;i++)
   {
    for(j=0;j<i;j++)
    {
       printf("%d\t",arr[i][j]);
    }
    printf("\n\n");
   }
     printf(" upper triangle is:\n");
     for(i=0;i<5;i++)
     {
     for(j=0;j<5;j++)
     {
     if(i<=j)
       printf("%d\t",arr[i][j]);
     else
       printf("\t");
    }
    printf("\n\n");
  }
  }

