#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];     // ชื่อ
    long id;           // รหัสนักศึกษา
    float gpa;         // เกรดเฉลี่ย
    char advisor[20];  // ชื่ออาจารย์
    char guardian[20]; // ชื่อผู้ปกครอง
};

int main()
{

    // static variable
    char name[20];
    long id;
    float gpa;
    char advisor[20];
    char guardian[20];

    strcpy(name, "Nakorn");
    id = 37374;
    gpa = 3.5;
    strcpy(advisor, "Kittichai");
    strcpy(guardian, "Komkrit");

    printf("Name: %s\n", name);
    printf("id: %d\n", id);
    printf("gpa: %.1f\n", gpa);
    printf("advisor: %s\n", advisor);
    printf("guardian: %s\n", guardian);
    printf("---------------------\n");

    // struct variable
    struct student s1;

    strcpy(s1.name, "Nakrit");
    s1.id = 36290;
    s1.gpa = 4.0;
    strcpy(s1.advisor, "murunte");
    strcpy(s1.guardian, "Komkrit");

    printf("Name: %s\n", s1.name);
    printf("id: %d\n", s1.id);
    printf("gpa: %.1f\n", s1.gpa);
    printf("advisor: %s\n", s1.advisor);
    printf("guardian: %s\n", s1.guardian);
    printf("---------------------\n");
    struct student s2;

    strcpy(s2.name, "Komkrit");
    s2.id = 36394;
    s2.gpa = 4.0;
    strcpy(s2.advisor, "Somchai");
    strcpy(s2.guardian, "Sombut");

    printf("Name: %s\n", s2.name);
    printf("id: %d\n", s2.id);
    printf("gpa: %.1f\n", s2.gpa);
    printf("advisor: %s\n", s2.advisor);
    printf("guardian: %s\n", s2.guardian);
    printf("---------------------\n");

    return 0;
}