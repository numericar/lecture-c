#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("n: %d\n", n);

    // multiple input
    int n1, n2, n3;
    n1 = n2 = n3 = 0;

    printf("Enter n1, n2, n3: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("sum: %d", (n1 + n2 + n3));

    char str[] = "This is my string";
    printf("str %s\n", str);

    // เก็บตัวอักษรได้ 50 ตัว
    char buffer[50];
    printf("Enter a string: ");
    scanf("%s", buffer); // ถ้าเป็น array ไม่ต้องอ้างอิงถึงตำแหน่ง
    printf("%s", buffer);

    return 0;
}