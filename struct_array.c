#include<stdio.h>
#include<string.h>
struct student;
{
    char name[20];
    long id;
    float gpa;
    char advisor[20];
    char guardian[20];
};


int main(){
    struct student[3];

    
    strcpy(s[0].name, "Nakorn");
    s[0].id = 37374;
    s[0].gpa = 3.5;
    strcpy(s[0].advisor, "Kittichai");
    strcpy(s[0].guardian, "Komkrit");

    printf("Name: %s\n", s[0].name);
    printf("id: %d\n",s[0]. id);
    printf("gpa: %.1f\n", s[0].gpa);
    printf("advisor: %s\n", s[0].advisor);
    printf("guardian: %s\n",s[0].guardian);
    printf("---------------------\n");
    
    strcpy(s[1].name, "Nakorn");
    s[1].id = 37374;
    s[1].gpa = 3.5;
    strcpy(s[1].advisor, "Kittichai");
    strcpy(s[1].guardian, "Komkrit");

    printf("Name: %s\n", s[1].name);
    printf("id: %d\n",s[1]. id);
    printf("gpa: %.1f\n", s[1].gpa);
    printf("advisor: %s\n", s[1].advisor);
    printf("guardian: %s\n",s[1].guardian);
    printf("---------------------\n");

    strcpy(s[2].name, "Nakorn");
    s[2].id = 37374;
    s[2].gpa = 3.5;
    strcpy(s[2].advisor, "Kittichai");
    strcpy(s[2].guardian, "Komkrit");

    printf("Name: %s\n", s[2].name);
    printf("id: %d\n",s[2]. id);
    printf("gpa: %.1f\n", s[2].gpa);
    printf("advisor: %s\n", s[2].advisor);
    printf("guardian: %s\n",s[2].guardian);
    printf("---------------------\n");

    return 0;
}