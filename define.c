#include <stdio.h>
#define a 1
//int a =1;
int b =2;

void print(){
    printf("a = %d, b = %d\n",a,b);
}
int main(){
    printf("a = %d, b = %d\n",a,b);
    a = 10;
    b = 20;
    printf("a = %d, b = %d\n",a,b);
    print();
    return 0;
}