//program to check weather inputted character is a vowel or consonant
# include<stdio.h>
# include<ctype.h>
main()
{
    char x;

    printf("Enter an Alphabet : ");
    scanf("%c",&x);

    x=tolower(x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        printf("%c is a Vowel",x);
    else
        printf("%c is a Consonant",x);
}

