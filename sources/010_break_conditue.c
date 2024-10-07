#include <stdio.h>

int main()
{
    int i = 0;
    
    printf("loop start\n");
    while (i < 10)
    {
        i++;
        printf("i: %d\n", i);

        if (i == 5) break;
    }
    printf("loop end\n");

    return 0;
}