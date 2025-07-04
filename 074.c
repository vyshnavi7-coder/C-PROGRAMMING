. // program to read 10 nos ad display sum of even nos and odd nos along with count

  #include<stdio.h>
  main()
  {
    int no,ec,oc;
    no=ec=oc=0;

    do
    {
     printf("enter a no:");
     scanf("%d",&no);

     if(no!=0)
     {
      if(no%2==0)
        ec++;
      else
        oc++;
     }
    }while(no!=0);
    printf("\n no.of even nos:%d",ec);
    printf("\n no.of odd nos:%d",oc);
    printf("\n");
  }

