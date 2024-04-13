#include <stdio.h>
#define SIZE 7
int main()
{
    char name[SIZE] = "abcdefg"; // swap name ให้เป็น gfedcba
    char *pa, *pb;
    char temp;
    //printf("%s\n",name);
    pa = name;
    pb = &name[SIZE - 1];

    // while (pa < pb)
    // {
    //     temp = *pa;
    //     *pa = *pb;
    //     *pb = temp;
    //     pb--;
    //     pa++;
    // }

    for (int i = 0; i < (SIZE / 2); i++)
    {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pb--;
        pa++;
    };
    
    printf("%s\n", name);

    return 0;
}
