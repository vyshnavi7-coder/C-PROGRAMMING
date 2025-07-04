//program to generate final bill for a smart tv company
# include<stdio.h>
main()
{
    char pay,cred;     int tot;
    float dis,bill;

    printf("Enter the total amount : ");
    scanf("%d",&tot);
    printf("Are u willing to pay by Cash (y/n): ");
    fflush(stdin);
    scanf("%c",&pay);

    if(pay=='y')
    {
        dis=tot*25/100;
        bill = tot - dis;
        printf("Total Bill Amount is :%f ",bill);
    }
    else
        if(pay=='n')
        {
            printf("Will u pay within 7 days (y/n) : ");
            fflush(stdin);
            scanf("%c",&cred);

            if(cred=='y')
            {
                dis = tot*15/100;
                bill = tot-dis;
                printf("Total Bill Amount is : %f",bill);
            }             else
            {
                dis=tot*10/100;
                bill=tot + dis;
                printf("Total Bill Amount is :%f ",bill);
            }
        }
}

