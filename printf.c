#include <stdio.h>

void demo_int()
{
    int n = 84;
    int m = 43;
    printf("n = %d\n,m = %5d\n", n, m);
    printf("n = %d\n,m = %05d\n", n, m);
}

void demo_float()
{
    double n = 3.14159;
    printf("%f\n", n);
    printf("%.2f\n", n);
    printf("%.3f\n", n);
    printf("%10.3f\n", n);
}

void demo_char()
{
    char c = 'A';
    printf("C = %c\nC = %d\nC = %x\nC = %X\nC = %#X\nC = %o\n", c , c , c , c , c);
    int a = 90;
    printf("D = %d\nD = %c\n", a , a );
}

int main()
{
    char*a;
    float b;
    a = "Mahidol";
    b = 400.00;
    demo_int();
    // demo_float();
    demo_char();
    printf("%10s",a);
    return 0;
}
