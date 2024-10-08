#include <stdio.h>

int add(int a, int b);
int mult(int x, int y);
void print_int(int a);

int main() 
{
    int result = add(1, 2);
    printf("Output: %d\n", result);

    int multOutput = mult(9, 7);
    printf("Mult output: %d\n", multOutput);

    print_int(5);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int mult(int x, int y)
{
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        result = add(result, y);
    }
    return result;
}

void print_int(int a)
{
    printf("Output: %d\n", a);
}