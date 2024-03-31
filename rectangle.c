#include <stdio.h>

double rectangle(double w, double h)
{
    double area;
    area = w * h;
    return area;
}

void star(double w, double h)
{
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int w, h;
    printf("enter width = ");
    scanf("%d", &w);
    printf("enter height = ");
    scanf("%d", &h);
    printf("rectangle area = %.2f\n", rectangle(w, h));
    star(w, h);
}
