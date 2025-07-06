//person stays in a rented house,runs an accounting firm which is also rented one,calculate total rent paid for office and housefor present month
#include<stdio.h>
main()
{
int house_rent,office_rent,totalrents;
house_rent=office_rent=totalrents=0;

printf("Enter present month office rent..:");
scanf("%d",&office_rent);
printf("Enter present month house rent..:");
scanf("%d",&house_rent);

totalrents=office_rent+house_rent;

printf("total rent paid for the present month are:%d",totalrents);
printf("\n");
}

