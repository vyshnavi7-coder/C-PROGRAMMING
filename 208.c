//program to develop fast food menu (generate orders till the user says yes)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ORDERS 10
#define MAX_ITEM_NAME_LEN 50

typedef struct {
    char name[MAX_ITEM_NAME_LEN];
    float price;
} MenuItem;

void displayMenu(MenuItem menu[], int numItems) {
    printf("======= Fast Food Menu =======\n");
    printf("Item No.\tItem Name\tPrice\n");
    for (int i = 0; i < numItems; ++i) {
        printf("%d\t\t%s\t\t$%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
    printf("=============================\n");
}
int main() {
    MenuItem menu[] = {
        {"Burger", 5.99},
        {"Pizza", 8.49},
        {"Fries", 2.99},
        {"Chicken Sandwich", 6.79},
        {"Salad", 4.99}
    };
    int numItems = sizeof(menu) / sizeof(menu[0]);
    char choice[5];
    int orderCount = 0;
    float total = 0.0;

    printf("Welcome to Fast Food Ordering System!\n");

    do {
        displayMenu(menu, numItems);

        int itemNumber;
        printf("Enter item number to order (1-%d): ", numItems);
        scanf("%d", &itemNumber);

        if (itemNumber < 1 || itemNumber > numItems) {
            printf("Invalid item number. Please try again.\n");
            continue;
        }

        int index = itemNumber - 1;
        total += menu[index].price;
        printf("%s added to your order. Current total: $%.2f\n", menu[index].name, total);

        printf("Do you want to order anything else? (yes/no): ");
        scanf("%s", choice);

        for (int i = 0; choice[i]; i++){
            choice[i] = tolower(choice[i]);
        }
    } while (strcmp(choice, "yes") == 0 && orderCount++ < MAX_ORDERS);

    printf("Thank you for your order! Your total amount is: $%.2f\n", total);

    return 0;
}

