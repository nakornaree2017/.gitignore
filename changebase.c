#include <stdio.h>

char *change_base(int num,int base,int change)
{
    char*result = "";
    char*alp = "0123456789ABCDEF";
    int base10_num = 0;
    int ind = 0;
    char *conv = "";

    if(num == 0){
        return 0;
        }
    // logic operation to && = and || = or, ! = not
    if(!(base > 2 && base <= 16) || ( change > 2 && change <= 16)){
        return "Enter the base and change between 2 and 16";
    // for(int i = 0; num > 0, i++)
    // {
    //     base10_num +=
    // }

    }
    itoa(num,conv,10)
    printf("conv = %d\n",conv);
    
}
int main(){
    change_base(10110,2,10);
    return 0;
}
