//program to read the name of a person display its length and continued this process until the user inputs N

#include<stdio.h>
#include<string.h>
main()
{
  char name[100];
  char continueinput;

  do
  {
   printf("enter a name:");
   scanf("%s",name);
   printf("lenght of the name %s is %lu\n",name,strlen(name));

   printf("do u want to continue?(Y/N):");
   scanf("%s",&continueinput);
  }
  while(continueinput == 'Y'||continueinput == 'y');

   printf("program terminated.\n");
}

