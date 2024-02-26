#include <stdio.h>

typedef struct student
{
    int sid;
    char name[40];
} student;

// scan fuction
student scanStudent(student s1)
{
    printf("Enter id");
    scanf("%d", &s1.sid);
    fflush(stdin);
    printf("Enter name:");
    gets(s1.name);
    return s1;
}

void main()
{
    student s1;
    // scan
    s1=scanStudent(s1);

        // print
    printf("\nStudent id   :  %d\n", s1.sid);
    printf("Student name :  %s", s1.name);
}
