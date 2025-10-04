/*
    เป็นการบอก compiler ว่าก่อนที่โปรแกรมจะทำงาน ให้ทำชุดคำสั่งที่อยู่ใน stdio.h มาใส่ในโปรแกรมของเราก่อน
    โดยในที่นี้ คือการนำชุดคำสั่ง standard input/output เข้ามาใส่ในโปรแกรมของเรา
    
    .h คือ header file
*/
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}