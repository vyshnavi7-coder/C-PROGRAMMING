//program to print first word from the string
#include <stdio.h>
#include <ctype.h>

void printFirstWord(char *str) {
    while (*str != '\0' && isspace(*str))
    {
        str++;
    }
    while (*str != '\0' && !isspace(*str))
    {
        putchar(*str);
        str++;
    }
    printf("\n");
}

 main()
  {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
    printf("First word of the string: ");
    printFirstWord(str);
}

