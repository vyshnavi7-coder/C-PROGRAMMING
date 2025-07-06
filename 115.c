//program to check whether the inputted string is palindrome or not

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void formatString(char *str) {
    int i, j = 0;
    char temp[strlen(str)];

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            temp[j++] = tolower(str[i]);
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;          }
        left++;
        right--;
    }
    return 1;

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
 formatString(str);
    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    return 0;
}

