//program to check whether the  input no is prime or not along with no of interaction

 #include<stdio.h>
 #include<math.h>
 main()
  {
    int z,c,no=0;
    int isprime='y';

    printf("enter a no:");
    scanf("%d",&no);

    z=sqrt(no);

    for(c=2;c<=z;c++)
    {

    if(no%c==0)
    {
     isprime='n';
     break;
    }
    }
    if(isprime=='n')
         printf("%d is not a prime no",no);
    else
        printf("%d is a prime no",no);
    printf("\n no.of interations are %d",c);
  }

