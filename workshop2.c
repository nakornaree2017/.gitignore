#include <stdio.h>
double grade()
{
    int grade;
    printf("enter grade = ", grade);
    scanf("%d", &grade);
    if (grade >= 80 && grade <= 100)
    {
        printf("Grade A");
    }
    else if (grade >= 70 && grade <= 79)
    {
        printf("Grade B");
    }
    else if (grade >= 60 && grade <= 69)
    {
        printf("Grade C");
    }
    else if (grade >= 50 && grade <= 59)
    {
        printf("Grade D");
    }
    else if (grade >= 0 && grade <= 49)
    {
        printf("Grade F");
    }
    else
    {
        printf("error");
    }
}
int main()
{
    grade();
}