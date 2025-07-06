//program to read that  email id and validate it
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidEmail(char *email)
 {
    int len = strlen(email);
    bool hasAt = false;
    bool hasDot = false;
    int atIndex = -1;
    int dotIndex = -1;

    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
     {
            hasAt = true;
            atIndex = i;
            break;
     }
    }
    for (int i = atIndex + 1; i < len; i++)
    {
        if (email[i] == '.')
        {
            hasDot = true;
            dotIndex = i;
            break;
        }
    }
    if (!hasAt || !hasDot || atIndex < 3 || dotIndex - atIndex < 4)
    {
        return false;
    }
    return true;
}
main()
 {
    char email[100];

    printf("Enter your email address: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = 'NULL';

 if (isValidEmail(email))
    {
        printf("Valid email address: %s\n", email);
    }
 else
    {
        printf("Invalid email address. Please enter a valid email.\n");
    }
}

