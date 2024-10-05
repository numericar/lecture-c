#include <stdio.h>

int main()
{
    int year = 2020;
    int price = 21000;
    
    if (year >= 2019 && price <= 20000)
    {
        printf("AND Ok!\n");
    }
    else 
    {
        printf("AND Not ok\n");
    }

    if (year >= 2019 || price <= 20000)
    {
        printf("OR OK\n");
    }
    else 
    {
        printf("OR Not ok!\n");
    }

    if (!(year >= 2019))
    {
        printf("NOT ok!\n");
    }
    else 
    {
        printf("NOT Not ok!\n");
    }

    return 0;
}