//program to find the no of palindrone in a sentence
 #include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char * str)
 {
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--)
        {
        while (!isalpha(str[i]) && i < j) i++;
        while (!isalpha(str[j]) && i < j) j--;

        if (tolower(str[i]) != tolower(str[j]))
        {
            return 0;
        }
    }
    return 1;
}
int countPalindromes(char *sentence)
 {
    char *word;
    int count = 0;

    word = strtok(sentence, " ,.!?;\n");

    while (word != NULL) {
        if (isPalindrome(word)) {
            count++;
        }
        word = strtok(NULL, " ,.!?;\n");
    }

    return count;
}

 main()
 {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    int palindromeCount = countPalindromes(sentence);
    printf("Number of palindromic words: %d\n", palindromeCount);
}

