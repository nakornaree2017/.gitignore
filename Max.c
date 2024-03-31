#include<stdio.h>
/*
int Length(int x[]){
    int i = 0;
    while ((x[i])!= '\0')
    {
        i++;
    }
    
    return i;
}
*/
int Max(int x[])
{
    int i = 0;
    int ans = x[0];
    for (i=1;i<sizeof(x);i++)
    {
        if (ans < x[i]){
            ans = x[i];
        }
    }
    return ans;
}
int main(){
    
    int q[5];
    int count;

    for (count = 0;count < 5;count++){
        printf("Please enter number for %d number of array : ",count + 1);
        scanf("%d",&q[count]);
    }

    printf("Max = %d\n",Max(q));
    //printf("%d",Length(q));

    return 0;

}
