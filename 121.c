//program to reverse inputted string
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseString(char str[])
 {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
 main()
{
    char inputString[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);
}

