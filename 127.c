
//program to read 10 names and display the longest name along with its length and position
#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_LENGTH 100

main()
 {
    char names[MAX_NAMES][MAX_LENGTH];
    int lengths[MAX_NAMES];
    int longest_length = 0;
    int longest_index = 0;
    printf("Enter 10 names:\n");
    for (int i = 0; i < MAX_NAMES; i++)
        {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
        lengths[i] = strlen(names[i]);

        if (lengths[i] > longest_length)
        {
            longest_length = lengths[i];
            longest_index = i;
        }
    }
    printf("\nLongest name:\n");
    printf("Name: %s\n", names[longest_index]);
    printf("Length: %d\n", longest_length);
    printf("Position: %d\n", longest_index + 1);
}
