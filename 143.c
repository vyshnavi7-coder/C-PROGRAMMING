//program to read a string and display it character by character
#include <stdio.h>
 main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters in the string along with their memory addresses:\n");
    while (str[i] != '\0')
    {
        printf("Character: %c, Address: %p\n", str[i], (void*)&str[i]);
        i++;
    }
}

