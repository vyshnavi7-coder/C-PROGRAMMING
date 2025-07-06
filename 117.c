//program to read username and password

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char username[50];
    char password[50];
    int i = 0;
    char ch;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter password: ");
    while (1) {
        ch = getch();
        if (ch == '\r')
            {
            password[i] = '\0';
            break;
        }
else if (ch == '\b' && i > 0)
         {
            printf("\b \b");
            i--;
        } else if (ch != '\b') {
            password[i] = ch;
            printf("*");
            i++;
        }
    }
    printf("\n\nUsername: %s\n", username);
    printf("Password: %s\n", password);

    return 0;
    }

