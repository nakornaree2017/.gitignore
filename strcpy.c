#include<stdio.h>
#include<string.h>

int main(){

    char str1[8] = "Nakorn";    
    char str2[8] = "\0";
    char str3[8] = "Aree";
    strcpy(str2,str1); // Same str1 = str2;
    printf("str2 : %s\n", str2);
    strcat(str1,str3); // Same str1 = str2;
    printf("str1 : %s\n", str1);

    char a[5] = "abcd";
    char b[5] = "abcf";

    printf("strcmp(a, b) : %d\n", strcmp(a,b));


    return 0;    
}