#include <stdio.h>

int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    /* Switch value of ch */
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a Vowel", ch);
            break;
        default:
            printf("%c is a Consonant", ch);
    }

    return 0;
}
