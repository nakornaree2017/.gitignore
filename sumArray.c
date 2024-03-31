#include <stdio.h>

int main()
{
    int a[2][5] = {{1, 2, 3, 4, 5}, {11, 12, 13, 14, 15}};
    int b[2][5] = {{11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};

    int i,j;
    int sum[2][5];
    for(i = 0;i<2;i++){     
        for(j = 0;j<5;j++){
            sum[i][j] = a[i][j] + b[i][j];  
            printf("%d ",sum[i][j]);
        }
    }
    return 0;
}