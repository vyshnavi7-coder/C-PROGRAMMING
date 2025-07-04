//program to fill the array of 10 elements with even no at odd index and odd no and even index

 #include<stdio.h>
 main()
 {
  int arr[10];
  int even=2;
  int odd=1;

  for (int i=0;i<10;i++)
  {
   if(i%2==0)
   {
       arr[i]=odd;
       odd+=2;
   }
   else
   {
      arr [i]=even;
      even+=2;
   }
  }
  printf("array elements:\n");
  for(int i=0;i<10;i++)
  {
   printf("%d",arr[i]);
  }
 }

