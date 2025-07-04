// program to read name and aadhar no of the person and display the following msg for the valid and invalid aadhar nos
 #include<stdio.h>
 main()
 {
    char name[20];
    int dc;
    long long int no,temp;
    dc=0;
    printf("enter ur name:");
    scanf("%s",&name);
    printf("enter ur 12 digits Aadhar no:");
    scanf("%lld",&no);

    temp=no;
    while(no!=0)
    {
     no=no/10;
     dc++;
    }
    no=temp;
       if(dc==12)
            printf("hy %s ur Aadhar no %lld is valid succesfully",name,no);
       else
            printf("hy %s ur Aadhar no %lld is invalid",name,no);

     printf("\n");
 }

