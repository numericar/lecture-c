#include <stdio.h>
#include <ctype.h>
#include <string.h> // have function for string type like Length, toUpper, toLower

int main()
{
    int num = 1;
    
    switch (num)
    {
        case 1: 
            printf("Case 1!\n");
            if (num == 1) printf("if!\n");
            break;
        case 2: // condition
            printf("Case 2!\n"); // statement
            break; // break
        default:
            printf("No case match");
    }

    printf("Outside switch");

    char s[] = "aabAdefghIjKlMNoPqRsTU";
    int a = 0;
    int vowel = 0;
    for (int i = 0; i < strlen(s); i++) 
    {
        switch (toupper(s[i]))
        {
            case 'A':
                a++;
                break;
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
                break;

        }
    }
    printf("a: %d, vowels: %d\n", a, vowel);

    return 0;
}