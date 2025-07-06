//program to read a string and copy the string vowels in uppercase and consonants in lowercase
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertCase(char *str)
 {
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            str[i] = toupper(ch);
        }
        else if (isalpha(ch))
        {
            str[i] = tolower(ch);
        }
    }
}
main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    convertCase(str);

    printf("Modified string: %s\n", str);

