// write a program to print natural nos from n to 1

  #include<stdio.h>
  main()
  {
    int no,i;

    printf("enter a no:");
    scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
      printf("\t%d",i);
    }
  }

