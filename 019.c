//Group of friends went to restaurant you must help those frnds to split the total bill along with the TIP among them.
#include<stdio.h>
main()
{
    float bill,tipper,totalbill,amtperperson;
    int nooffriends=0;

    printf("Enter the total billamt: ");
    scanf("%f",&bill);

    printf("Enter tip percentage (5%||10%): ");
    scanf("%f",&tipper);

    printf("Enter the no of friends: ");
    scanf("%f",&nooffriends);

    totalbill=bill+(bill*(tipper/100));
    amtperperson=totalbill/nooffriends;

    printf("Total bill including tip: %.2f\n",totalbill);
    printf("Each person should pay: %.2f\n",amtperperson);

    printf("\n");
}

