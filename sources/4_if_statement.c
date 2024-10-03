#include <stdio.h>

int main() 
{
    int x = 3;

    if (x < 4) printf("x is less than 4\n");

    if (x == 2) 
    {
        printf("x is equals to 2\n");
    }
    else if (x == 3)
    {
        printf("x is equals to 3\n");
    }
    else if (x == 4) 
    {
        printf("x is equals to 4\n");
    }
    else 
    {
        printf("x does not equal 2!\n");
    }

    printf("if done\n");

    return 0;
}