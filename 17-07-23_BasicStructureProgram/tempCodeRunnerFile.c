#include <stdio.h>
#include <string.h>
Student scanStudent(Student x);
typedef struct Student
{
    int roll;
    char name[50];
   

} Student;

void main()
{
    Student s;
    s=scanStudent(s);
    printf("Roll:%d",s.roll);
    printf("Name:%d",s.name);
}


Student scanStudent(Student x)
{
    printf("Enter roll");
    scanf("%d", &x.roll);
    fflush(stdin);
    printf("Enter name");
    gets(x.name);
    return x;
}