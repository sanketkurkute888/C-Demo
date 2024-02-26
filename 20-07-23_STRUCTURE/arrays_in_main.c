#include <stdio.h>
typedef struct Student
{
    int roll;
    char name[50];
    // float percentage;ṇ

} Student;


// functi

void main()
{
    Student s[5];

    //   accpet datafrom user
    for (int i = 0; i < 5; i++)
    {

        printf("Enter roll    :");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("Enter name    :");
        gets(s[i].name);
    }

    // prrint
    for (int i = 0; i < 5; i++)
    {

        printf("Roll   :   %d\n", s[i].roll);
        printf("Name   :   %s\n", s[i].name);
    }
}