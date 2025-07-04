//program to display the traffic control signal lights
  #include<stdio.h>
  main()
  {
      char opt,b;
      printf("enter a character:");
      scanf("%c",&opt);

      switch(opt)
      {
          case 'R':printf("RED light please STOP");break;
          case 'Y':printf("YELLOW light please check and Go");break;
          case 'G':printf("GREEN light please Go");break;
          case 'X':printf("there is NO SIGNAL");break;
      }
       if(opt=='R'|| opt=='Y'|| opt=='G'|| opt=='X')
       {
           printf("%c",b);
       }
  }

