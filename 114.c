)//program to convert the inputted string into proper case

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToProperCase(char *str) {
    int i;
    int len = strlen(str);

    if (len > 0) {
        str[0] = toupper(str[0]);
    }
    for (i = 1; i < len; i++) {
        if (isspace(str[i - 1]) && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    convertToProperCase(str);

    printf("String in proper case: %s\n", str);
}

