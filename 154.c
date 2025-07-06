//program which reads a string and find no of capital letters,small letter,digits,or special characters
#include <stdio.h>
#include <ctype.h>

 main()
 {
    char str[1000];
    int i;
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, specialCharCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

        for (i = 0; str[i] != '\0'; i++)
{
    if (isupper(str[i]))
        {
            uppercaseCount++;
        }
    else if (islower(str[i]))
        {
            lowercaseCount++;
        }
   else if (isdigit(str[i]))
        {
            digitCount++;
        }
   else if (isalnum(str[i]))
        {
            specialCharCount++;
        }
    }
    printf("Number of uppercase letters: %d\n", uppercaseCount);
    printf("Number of lowercase letters: %d\n", lowercaseCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of special characters: %d\n", specialCharCount);
}

