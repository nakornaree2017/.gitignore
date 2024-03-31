#include <stdio.h>

void seq(){
    double celsius, fahrenheit;
    printf("enter degree in celsius ");
    scanf("%lf", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("%f celsius = %f Fahrenheit\n", celsius,fahrenheit);
}

void condition(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age <= 6){
        printf("you re kid.\n");
        printf("free of charge.\n");
    }
    else{
        printf("you re adult.\n");
        printf("199 Baht.\n");
    }
    printf("Bye bye...");

}

void repetition(){
    // int sum = 1+2+3+4+5+6+7+8+9+10;
    int sum = 0;
    int i;
    for(int i=2;i<=100;i=i+1){
        sum = sum + i;
    }
    printf("%d\n",i);
}

int main(){
    // seq();
    // condition();
    repetition();
    return 0;
}