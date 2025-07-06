//program to generate username from the inputted mail id
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void generateUsername(char email[])
{
    char username[MAX_LENGTH];
    int i = 0;

    while (email[i] != '@' && email[i] != '\0')
    {
        username[i] = email[i];
        i++;
    }
    username[i] = '\0';

    printf("Generated username: %s\n", username);
}
int main()
 {
    char email[MAX_LENGTH];

    printf("Enter your email ID: ");
    scanf("%s", email);

    generateUsername(email);

    return 0;
}

