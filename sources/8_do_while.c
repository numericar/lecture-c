#include <stdio.h>

int main()
{
    int x = 0;

    do 
    {
        printf("i: %d\n", x++);
    }
    while (x <= 5);

    printf("Hello World");
    return 0;
}