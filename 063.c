//program to design application for restaurant
 #include<stdio.h>
 main()
 {
  int no,plates,price,total;
  no=total=plates=price=0;

  printf("enter a no:");
  scanf("%d",&no);

  printf("enter no.of paltes:");
  scanf("%d",&plates);

       switch(no)
       {
       case 1 : price = 25 ; break;
       case 2 : price = 50 ; break;
       case 3 : price = 20 ; break;
       case 4 : price = 25 ; break;
       case 5 : printf("exit") ; break;
       default:printf("vaild no");
       }
       total=price*plates;
       printf("\n total amt is %d",total);
 }

