#include <stdio.h>
#include <string.h>

int main() {
    char test[5];
    test[0] = 't';
    test[1] = 'e';
    test[2] = 's';
    test[3] = 't';
    test[4] = '\0';
    printf("%s\n", test);

    char test2[5] = "test";
    printf("%s\n", test2);

    char test3[] = "Some big long string!";
    printf("%s\n", test3);

    char username[] = "mint.rosetta2001";
    int length = strlen(username);
    printf("length of username: %d\n", length);

    char s1[] = "my string to copy";
    char s2[50];
    strcpy(s2, s1);
    printf("s2: %s", s2);

    return 0;
}