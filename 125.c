//program to check whether the given word exists in the main string or not

#include <stdio.h>
#include <string.h>

int wordExists(char *mainStr, char *word)
{
    int mainLen = strlen(mainStr);
    int wordLen = strlen(word);

 for (int i = 0; i <= mainLen - wordLen; i++)
        {
        int j;

        for (j = 0; j < wordLen; j++)
        {
            if (mainStr[i + j] != word[j])
                break;
        }
        if (j == wordLen)
            return 1;
    }
    return 0;
}
 main()
 {
    char mainStr[100], word[50];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter the word to check: ");
    scanf("%s", word);

    if (wordExists(mainStr, word))
    {
        printf("'%s' exists in the main string.\n", word);
    } else
    {
        printf("'%s' does not exist in the main string.\n", word);
    }
}

