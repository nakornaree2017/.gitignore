#include <stdio.h>

void multiplication(int multitable)
{
    int result = 0;
    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", multitable, i, i * multitable);
    }
}

int main()
{
    int value = 0;
    printf("enter value: ");
    scanf("%d", &value);
    multiplication(value);
    return 0;q                                                                                                                                                                                                                                                                                                                                                          
}