#include <stdio.h>

int main()
{
    int amount[12];
    int month = 1;
    int value = 0;
    int average = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("Month %d : ", month);
        scanf("%d", &amount[i]);
        month++;
        value += amount[i];
    }
    average = value / 12;

    printf("\nMonth      Amount\n");
    printf("==================\n");
    for (int i = 1; i < 12; i++)
    {
        printf("%d          %d\n", i, amount[i]);
    }
    printf("==================\n");
    printf("Total       %d\n", value);
    printf("Average     %d\n", average);

    return 0;
}