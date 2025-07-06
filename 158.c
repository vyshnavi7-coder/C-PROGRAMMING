//program which consumes the name and display the alphabets which are not in the given name
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void displayMissingAlphabets(const char *name)
{
    int present[26] = {0};

    for (int i = 0; name[i] != '\0'; i++)
    {
        char ch = tolower(name[i]);
        if (isalpha(ch)) {
            present[ch - 'a'] = 1;
        }
    }
    printf("Alphabets not in the name:");
    for (int i = 0; i < 26; i++)
     {
        if (!present[i])
         {
            printf(" %c", 'a' + i);
        }
    }
    printf("\n");
}
 main()
 {
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }
    displayMissingAlphabets(name);
}

