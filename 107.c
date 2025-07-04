//program that finds the frequency of each elements in array of N elements

  #include<stdio.h>
  main()
  {
   int arr[100];
   int N,i,j,c;

   printf("enter the no.of elements(N):");
   scanf("%d",&N);

   printf("enter the elements:");

   for(i=0;i<N;i++)
   {
    scanf("%d",&arr[i]);
   }
   for(i=0;i<N;i++)
   {
    c=0;
    for(j=0;j<N;j++)
   {
    if (arr[i]==arr[j])
    {
     c++;
    }
   }
   printf("frequency of %d:%d\n",arr[i],c);
   }
  }

