//program to read 2 string and check if they are anagram string or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return false;
    }

    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; i < len1; i++)
    {
        count1[(int)str1[i]]++;
    }

    for (int i = 0; i < len2; i++)
    {
        count2[(int)str2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }

    return true;
}
 main()
 {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

if (areAnagrams(str1, str2))
    {
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    }
else
    {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }
}

