//program to find the largest and smallest word in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

 void findLargestAndSmallestWord(char str[])
  {
    char largestWord[MAX_LENGTH], smallestWord[MAX_LENGTH];
    int i = 0, length = strlen(str);
    int currentWordLength = 0, maxWordLength = 0, minWordLength = MAX_LENGTH;
    int start = 0, end = 0;

    while (i <= length)
    {
        if (isspace(str[i]) || str[i] == '\0')
    {
            currentWordLength = i - start;

            if (currentWordLength > maxWordLength)
            {
                maxWordLength = currentWordLength;
                strncpy(largestWord, &str[start], maxWordLength);
                largestWord[maxWordLength] = '\0';
            }
            if (currentWordLength < minWordLength && currentWordLength > 0)
            {
                minWordLength = currentWordLength;
                strncpy(smallestWord, &str[start], minWordLength);
                smallestWord[minWordLength] = '\0';
            }
            start = i + 1;
        }
        i++;
    }

    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}
int main()
{
    char inputString[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    findLargestAndSmallestWord(inputString);
    return 0;
}

