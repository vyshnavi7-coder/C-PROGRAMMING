//program to read capital alphabets from the user and display in lowercase.
#include<stdio.h>
main()
{
    char uppercase,lowercase;

    printf("Enter any uppercase alphabet from AtoZ: ");
    scanf("%c",&uppercase);

    lowercase=uppercase+32;

    printf("lowercase from of %c is: %c\n",uppercase,lowercase);

    printf("\n");
}

