#include <stdio.h>

int main()
{
    int i, j, k;

    /**for loop*/
    for (i = 0; i < 5; i++)
        printf("i: %d", i);

    printf("\n");

    /**while loop*/
    j = 1;
    while (j < 5)
    {
        printf("%d ", j);
        j++;
    }

/* do while loop */
    k = 1;
    do
    {
        printf("Insert Number : \n");
        scanf("%d\n",&k);
    } while (k < 1);
    
    printf("Exit\n");

    return 0;
}
