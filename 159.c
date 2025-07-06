//program which reads set of strings into 2d character array ,sort them into alphabetical order
#include<stdio.h>
main()
{
  char name[10][20],temp[10];
  int i,j;
  for(i=0;i<10;i++)
  {
    printf("enter %d name:",i+1);
    gets(name[i]);
  }
  for(i=0;i<10;i++)
   {
    for(j=i+1;j<10;j++)
    {
      if(strcmp(name[i],name[j])>0)
      {
      strcpy(temp,name[j]);
      strcpy(name[j],name[i]);
      strcpy(name[i],temp);
      }
    }
   }
  printf("\n\n sorted names:\n");
  for(i=0;i<10;i++)
  puts(name[i]);
}

