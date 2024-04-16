#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[20];
    long id;
    double gpa;
    char advisor[20];
    char guardian[20];
};

int main()
{
    int num;
    char name[20];
    long id;
    double gpa;
    char advisor[20];
    char guardian[20];
    struct student *ip;

    printf("Enter Number of Student: ");
    scanf("%d", &num);

    ip = (struct student *)malloc(num * sizeof(struct student));

    for (int i = 0; i < num; i++)
    {

        printf("Enter name: ");
        scanf("%s", &name);
        strcpy(ip[i].name, name);

        printf("Enter id: ");
        scanf("%ld", &id);
        ip[i].id = id;

        printf("Enter GPA: ");
        scanf("%f", &gpa);
        ip[i].gpa = gpa;

        printf("Enter advisor: ");
        scanf("%s", &advisor);
        strcpy(ip[i].advisor, advisor);

        printf("Enter guardian: ");
        scanf("%s", &guardian);
        strcpy(ip[i].guardian, guardian);
    }

    for (int j = 0; j < num; j++)
    {
        printf("Name: %s\n", ip[j].name);
        printf("ID: %ld\n", ip[j].id);
        printf("GPA: %.2f\n", ip[j].gpa);
        printf("Advisor: %s\n", ip[j].advisor);
        printf("Guardian: %s\n", ip[j].guardian);
        printf("-------------------------\n");
    }

    return 0;
}