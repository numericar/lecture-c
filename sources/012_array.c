#include <stdio.h>

int main()
{
    int grades[5]; // declare
    grades[0] = 91; // assign value to index 
    grades[1] = 92;
    grades[2] = 93; 
    grades[3] = 94; 
    grades[4] = 95; 

    // declear + assign
    int grades2[5] = { 1, 2, 3, 4, 5 };

    int total = 0;

    for (int i = 0; i < 5; i++) {
        total = total + grades[i];
    }

    int average = total / 5;
    printf("average: %d\n", average);

    return 0;
}