//create a header with the name "myfunctions.h" and create 4 functions in it
#include <stdio.h>
#include <ctype.h>
#include <string.h>

double calculateMean(double num1, double num2, double num3)
{
    return (num1 + num2 + num3) / 3.0;
}
int checkPositivity(int num)
{
    if (num > 0)
        return 1;
    else if (num < 0)
        return -1;
    else
        return 0;
}
int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        }
        str++;
    }
    return count;
}
void properCase(char *str) {
    int i = 0;

    if (isalpha(str[i])) {
        str[i] = toupper(str[i]);
    }
    i++;
    while (str[i]) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}
 main()
  {

    double mean = calculateMean(10.5, 20.5, 30.5);
    printf("Mean of 10.5, 20.5, and 30.5 = %.2f\n", mean);

    int num = -5;
    int result = checkPositivity(num);
    if (result == 1)
        printf("%d is positive.\n", num);
    else if (result == -1)
        printf("%d is negative.\n", num);
    else
        printf("%d is zero.\n", num);

    const char *str = "Hello, world! This is a test string.";
    int wordCount = countWords(str);
    printf("Word count of \"%s\" = %d\n", str, wordCount);

    char text[] = "hELlo, WORld!";
    printf("Before conversion: %s\n", text);
    properCase(text);
    printf("After conversion: %s\n", text);
}


