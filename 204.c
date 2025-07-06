//program to read price of 5 product and add it to shopping cart, if the product cost is above 10,000
#include<stdio.h>
main()
{
int price,total,count;
price=total=0;

for(count=1;count<=5;count++)
{
printf("Enter price of %d product...",count);
scanf("%d",&price);

if(price>=10000)
{
printf("\nproduct price exceeds maximum limit...so,cannot be added to cart");
continue;
}
total=total+price;

}
printf("your total cart value is:%d",total);

printf("\n");
}

