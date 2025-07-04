//program to display if a number is vowel or consonant
# include<stdio.h> main()
{
    char ch;

    printf("Enter a Alphabet : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
      printf("%c is a Vowel",ch);
    else
        if((ch>65 && ch<90 ) || (ch>97 || ch<122))
            printf("%c is a consonant",ch);
            else
            printf("Invalid Input.");
}

