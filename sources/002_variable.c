#include <stdio.h>

/* print fahrenheit-celsuis tables */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of tempareture scale
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}