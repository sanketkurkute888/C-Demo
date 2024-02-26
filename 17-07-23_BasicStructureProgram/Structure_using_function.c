#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int roll;
    char name[50];
   

} Student;


Student scanStudent(Student x)
{
    printf("Enter roll");
    scanf("%d", &x.roll);
    fflush(stdin);
    printf("Enter name");
    gets(x.name);
    return x;
}

Student PrintStudent(Student x)
{
    printf("Roll:%d\n",x.roll);
    printf("Name:%s",x.name);
}

void main()
{
    
    Student s;
    s=scanStudent(s);


//     printf("Roll:%d\n",s.roll);
//     printf("Name:%s",s.name);
//
    PrintStudent(s);
 }

