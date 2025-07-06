// program to demonstrate pointer
#include<stdio.h>
main()
{
    int no=11;
    int*p;
    p=&no;

    printf("value of no is:%d",no);
    printf("\naddress of no is:%u",&no);

    printf("\n value of p is%u",p);
    printf("\n value at the address of p is:%d",*p);
}
