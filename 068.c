// program to read 2 integer values
  #include<stdio.h>
  main()
  {
    int no1,no2;
    printf("enter a number:");
    scanf("%d",&no1);
    printf("enter another no:");
    scanf("%d",&no2);

    if(no1<=no2)
      printf("up");
     else
       if(no1>=no2)
        printf("down");
      else
        printf("equal");
  }

