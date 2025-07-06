// program to declare a string and assign " happy programming " and display it zigzag case
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
 {
    char str[] = "happy programming";
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        {
        if (i % 2 == 0)
        {
            printf("%c", toupper(str[i]));
        }
    else
        {
            printf("%c", tolower(str[i]));
        }
}
 }
