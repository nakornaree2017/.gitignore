#include<stdio.h>

int main()
{
    float arrayVar[10];
    int count;
    for (count = 0;count<10;count++){
        printf("Please Enter score for %d member of array: ",count + 1);
        scanf("%f",arrayVar[count]);

    }
    for (count = 0;count < 10 ;count++){
        printf("Member %d score = $%.2f\n",count+1,arrayVar[count]);
        printf("Member %d score = $%.2f\n",count,arrayVar[count]);
    }

}