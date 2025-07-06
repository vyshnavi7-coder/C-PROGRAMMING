//program to read a password and check its strength

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void checkPasswordStrength(char password[])
 {
    int length = strlen(password);
    int hasLowerCase = 0, hasUpperCase = 0, hasDigit = 0, hasSpecial = 0;

        for (int i = 0; i < length; i++)
            {
    if (islower(password[i]))
        {
            hasLowerCase = 1;
        }
    else if (isupper(password[i]))
        {
            hasUpperCase = 1;
        }
    else if (isdigit(password[i]))
        {
            hasDigit = 1;
        }
    else
        {
            hasSpecial = 1;
        }
    }

    if (length < 8)
        {
        printf("Password is too short. Minimum length is 8 characters.\n");
        }
    else if (hasLowerCase && hasUpperCase && hasDigit && hasSpecial)
       {
        printf("Password is very strong.\n");
       }
     else if ((hasLowerCase && hasUpperCase) && (hasDigit || hasSpecial))
      {
        printf("Password is strong.\n");
      }
     else if ((hasLowerCase && (hasUpperCase || hasDigit || hasSpecial)) ||
               (hasUpperCase && (hasLowerCase || hasDigit || hasSpecial)) ||
               (hasDigit && (hasLowerCase || hasUpperCase || hasSpecial)) ||
               (hasSpecial && (hasLowerCase || hasUpperCase || hasDigit)))
        {
        printf("Password is medium.\n");
        }
    else
        {
        printf("Password is weak.\n");
       }
}


