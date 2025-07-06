//program to read 2 passwords and compare their lengths, if lengths are equal then check for similarities
#include <stdio.h>
#include <string.h>

void comparePasswords(char password1[], char password2[])
{
    int len1 = strlen(password1);
    int len2 = strlen(password2);

    if (len1 != len2)
        {
        printf("Passwords have different lengths.\n");
        }
    else
       {
        int similar = 1;
  for (int i = 0; i < len1; i++)
            {
        if (password1[i] != password2[i])
            {
                similar = 0;
                break;
            }
        }
        if (similar)
            {
            printf("Passwords are identical.\n");
            }
        else
            {
            printf("Passwords are of equal length but not identical.\n");
           }
    }
}
int main()
 {
    char password1[50], password2[50];

    printf("Enter password 1: ");
    scanf("%s", password1);

    printf("Enter password 2: ");
    scanf("%s", password2);

    comparePasswords(password1, password2);
    return 0;
}
int main()
 {
    char password[50];

    printf("Enter your password: ");
    scanf("%s", password);

    checkPasswordStrength(password);

    return 0;
}

