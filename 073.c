// program to read a name and display lenght many times along with serial no
  #include<stdio.h>
  #include<string.h>
  main()
  {
    char name[20];
    int c=1,len;
    printf("enter name:");
    scanf("%s",&name);
    len=strlen(name);
    while(c<=len)
    {
      printf("\n%d%s",c,name);
      c++;
    }
    printf("\n");
  }

