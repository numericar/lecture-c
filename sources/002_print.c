#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("\tAnother line\n");
    printf("double quote \" ");
    printf("\\\n");

    char str[] = "A string to output\n";
    printf("str: %s", str);
    printf("|||%10d|||\n", 5);
    printf("|||%8.5f|||\n", 1000.5);

    return 0;
}