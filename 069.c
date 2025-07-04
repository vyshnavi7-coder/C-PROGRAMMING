// program to find out whether the character presses through the keyboard is a digit or not

  #include<stdio.h>
  main()
  {
    char ch;

    printf("enter a character:");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
      printf("it is digit");
      else
       printf("invalid");
  }

