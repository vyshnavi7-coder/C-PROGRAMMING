//program to read a name and print length many nos of times along with serial nos

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length, i, num;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = 0;

    length = strlen(name);

    printf("Enter the number of times to print: ");
    fflush(stdin);
    scanf("%d", &num);

    printf("\n");

    for (i = 1; i <= num; i++) {
        printf("%d. %s\n", i, name);
    }

    return 0;
}

