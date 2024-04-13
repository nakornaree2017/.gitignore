#include<stdio.h>
#include<string.h>

int main(){
    int a = 10;
    int b = 20; 
    int c = 30; 

    int *ip; // ตัวแปรแบบ pointer ใช้ * ในการประกาศ
    
    printf("Address of a: %p, Value of a: %d\n", &a,a);// แสดง address ของตัวแปร a
    printf("Address of b: %p, Value of b: %d\n", &b,b);// แสดง address ของตัวแปร b
    printf("Address of c: %p, Value of c: %d\n", &c,c);// แสดง address ของตัวแปร c

    ip = &b; //ให้ ip ชี้ไปที่ a
    //ip = &b;
    //ip = &c;
    printf("Address of ip: %p\n", ip);// ไม่มี * คือใช้ดู address
    printf("Value of ip: %d\n", *ip); // * คือใช้ดูค่า

    *ip = 100; // ให้ค่าชี้ไปเป็น 100

    printf("Address of ip: %p\n", ip);// ไม่มี * คือใช้ดู address
    printf("Value of ip: %d\n", *ip); // * คือใช้ดูค่า

    printf("Address of b: %p, Value of b: %d\n", &b,b);

}