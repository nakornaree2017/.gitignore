#include <stdio.h>

int main(){
    char b[6] = "hello"; // +1 = \n
/*
    char a = 'a';
    char b[6] = "hello"; // +1 = \n
    int c = 10;
    long d = 100000000;
    float e = 10.5;
    double f = 10.5;

    printf("a: %d\n", sizeof(a)); // sizeof() คำสั่งเช็คขนาดของตัวแปร หน่วยเป็น bype
    printf("b: %d\n", sizeof(b));
    printf("b: %d\n", sizeof(c));
    printf("b: %d\n", sizeof(d));
    printf("b: %d\n", sizeof(e));
    printf("b: %d\n", sizeof(f));
/**/

    printf("b : %p\n", b);
    printf("b : %s\n", b);
    printf("address b: %p, value b: %c \n", &b[0],b[0]);
    printf("address b: %p, value b: %c \n", &b[1],b[1]);
    printf("address b: %p, value b: %c \n", &b[2],b[2]);
    printf("address b: %p, value b: %c \n", &b[3],b[3]);
    printf("address b: %p, value b: %c \n", &b[4],b[4]);
    printf("address b: %p, value b: %c \n", &b[5],b[5]);
    //printf("address b: %p, value b: %c \n", &b[6],b[6]);
    //printf("address b: %p, value b: %c \n", &b[7],b[7]);

    return 0;
}
