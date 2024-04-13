#include <stdio.h>

int main()
{
    int grade;

    printf("Enter the grade : ");
    scanf("%d", &grade);
/*
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
*/
//switch condition
    switch (grade)
    {
    case 90:
        printf("Grade A :\n");
        break;
        
    case 80:
        printf("Grade B :\n");
        break;
        
    case 70:
        printf("Grade C :\n");
        break;
        
    case 60:
        printf("Grade D :\n");
        break;
    default:
        printf("Grade F :\n");
        break;
    }

    return 0;
}

