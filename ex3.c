#include <stdio.h>

// input + process + output
void rectangle2()
{
    double area;
    //  int w;
    //  int h;
    int w, h;
    printf("enter width = ");
    scanf("%d", &w);
    printf("enter height = ");
    scanf("%d", &h);
    area = w * h;
    printf("rectangle area = %.2f\n", area);
}


double rectangle(double w, double h){
    double area;
    area = w * h;
    return area;
}
void triangle()
{
    double area;
    //  int w;
    //  int h;
    int w, h;
    printf("enter BASE = ");
    scanf("%d", &w);
    printf("enter height = ");
    scanf("%d", &h);
    area = .5 * w * h;
    printf("triangle area = %.2f\n", area);
}


void circle()
{
    double area;
    //  int w;
    //  int h;
    int Ra;
    float p = 3.14;
    printf("enter radius = ");
    scanf("%d", &Ra);
    area = p * Ra * Ra;

    printf("Circle area = %.2f\n", area);
}

int main()
{
    double w,h;
    printf("enter width = ");
    scanf("%lf",&w);
    printf("enter height = ");
    scanf("%lf",&h);
    printf("rectangle area = %.2f\n",rectangle(w,h));

    //circle();
    // area = .5*w*h;
    //  int w;
    //  int h;
    // printf("enter width = ");
    // scanf("%d", w);
    // printf("enter height = ");
    // scanf("%d", h);
}