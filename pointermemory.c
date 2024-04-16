#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    char*str;
    -

    printf("Enter number of characters: ");
    scanf("%d", &num);



    str = (char*)calloc(num,sizeof(char));

    for(int i = 0;i < num; i++){
        scanf(" %c",str[i]);

    }
    printf("%s",str);

    free(str);
    // printf("String is: ");
    // for(int i = 0;i < num; i++){
    //     printf("%s", str++);
    // }
    // int *p = NULL;


    // p = (int*)malloc(sizeof(int));
    // *p = 5;

    // printf("p address: %p\n", p);
    // printf("p value: %d\n", p);

    // free(p);

    // //printf("int size: %d\n", sizeof(int));

    // char *s;
    // s = (char*)malloc(sizeof(char));
    // *s = 'N';
    // s[1] = 'a';
    // s[2] = 'k';
    // s[3] = 'o';
    // s[4] = 'r';
    // s[5] = 'n';
    // s[6] = ' ';
    // s[7] = 'A';
    // s[8] = 'r';
    // s[9] = 'e';
    // s[10] = 'e';

    // printf("s address: %s\n", s);
    // free(s);    //clean

    


    return 0;
}
