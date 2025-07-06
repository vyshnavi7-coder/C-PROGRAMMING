//program to print natural nos multiple of 5's till 100 using goto
#include<stdio.h>
main()
{
    int no=0;
    lable1:
        printf("\t%d",no+=5);
    if(no<100)
            goto lable1;
}

