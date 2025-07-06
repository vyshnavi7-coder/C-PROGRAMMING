//program to read ur name and copy all the vowels in one string and all the consonants in another string

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100

int isVowel(char ch)
 {
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
void separateVowelsAndConsonants(char name[], char vowels[], char consonants[])
 {
    int len = strlen(name);
    int vowelIndex = 0, consonantIndex = 0;

    for (int i = 0; i < len; i++)
        {
        if (isalpha(name[i]))
        {
            if (isVowel(name[i]))
        {
                vowels[vowelIndex++] = name[i];
        }
    else
        {
                consonants[consonantIndex++] = name[i];
        }
        }
    }
    vowels[vowelIndex] = '\0';
    consonants[consonantIndex] = '\0';
}
int main()
 {
    char name[MAX_LENGTH];
    char vowels[MAX_LENGTH], consonants[MAX_LENGTH];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    separateVowelsAndConsonants(name, vowels, consonants);
    printf("Vowels: %s\n", vowels);
    printf("Consonants: %s\n", consonants);
    return 0;
}

