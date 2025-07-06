//program to print the 2nd word from the inputted string
#include <stdio.h>

#define MAX_LENGTH 100

void printSecondWord(char str[])
 {
    int i = 0, wordCount = 0;
    char currentWord[MAX_LENGTH];
    while (str[i] == ' ')
    {
        i++;
    }
        while (str[i] != '\0')
    {
        while (str[i] == ' ')
    {
            i++;
    }
         int j = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            currentWord[j++] = str[i++];
        }
        currentWord[j] = '\0';

        wordCount++;

        if (wordCount == 2)
        {
            printf("Second word: %s\n", currentWord);
            return;
        }
    }
    printf("Input string has less than two words.\n");
}
int main()
 {
    char inputString[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    printSecondWord(inputString);

    return 0;
}

