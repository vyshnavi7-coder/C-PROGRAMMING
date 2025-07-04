//program to filll the array of 10 random nos and count no of digits of each elements of the array
 #include<stdio.h>
 #include<time.h>
 #include<stdlib.h>
 main()
 {
  int arr[10];
  int i,dc;
  srand(time(NULL));
  for(i=0;i<=9;i++)
  {
   arr[i]=rand()%1000;
  }
  for(i=0;i<=9;i++)
  {
  dc=0;
  int no=arr[i];
  while(no!=0)
  {
   no/=10;
   dc++;
  }
  printf("no:%d,digits:%d\n",arr[i],dc);
  }
 }

