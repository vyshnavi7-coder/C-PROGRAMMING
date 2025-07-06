
) //program to read a string and count the 1st character of the string  in the inputted string

#include <stdio.h>
#include <string.h>

int countFirstChar(char *str)
 {
    char firstChar = str[0];
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == firstChar)
        {
            count++;
        }
    }

    return count;
}

 main()
  {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int occurrences = countFirstChar(str);

    printf("The first character '%c' appears %d times in the string.\n", str[0], occurrences);
    }
