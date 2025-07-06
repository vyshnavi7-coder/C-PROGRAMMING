//program to read ur name and print the following pattern
#include <stdio.h>
#include <string.h>

void printPattern(char *name)
 {
    int len = strlen(name);

    for (int i = 0; i < len; i++)
        {
        printf("%c ", name[i]);
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Pattern for name '%s':\n", name);
    printPattern(name);
}

