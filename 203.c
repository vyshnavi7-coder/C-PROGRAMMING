//program to read price of the products and keep on adding it to shopping cart,cart value reaches to 25,000 then display message
#include<stdio.h>
main()
{
int price,total;
price=total=0;

while(1)
{
printf("Enter price of the item and it will be added to the cart...:");
scanf("%d",&price);

if(total<=25000)
total=total+price;
else
{
     printf("\nyou have reached maximum limit for cash on delivery orders...");
     printf("\nnow redirecting to checkout page...");
     break;
     }
   }
   printf("your cart value is:%d",total);
   printf("\n");
}

