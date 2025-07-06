//G mail allows 50MB size of images while sending mails, write program to read size of one image and calculate how many images can send
#include<stdio.h>
main()
{
int imagecount;
float imagesize;
const int MAXLIMIT=50;
imagecount=imagesize=0;

printf("Enter size of each image...:");
scanf("%f",&imagesize);

imagecount=MAXLIMIT/imagesize;

printf("\ntotal number of images can be sent per mail is:%d",imagecount);
printf("\n");
}

