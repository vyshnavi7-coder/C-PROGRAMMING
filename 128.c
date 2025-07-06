//program to read a name and display success msg

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 main()
 {
    char name[100];
    bool isValid = false;

    while (!isValid)
    {
        printf("Enter your name (minimum 5 characters): ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    if (strlen(name) >= 5)
        {
            isValid = true;
        }
    else
        {
            printf("Name should be minimum 5 characters long. Please try again.\n");
        }
    }
    printf("Success! %s\n", name);
   printf("\n");
}

