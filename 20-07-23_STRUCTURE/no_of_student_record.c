#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int roll, p, c, m;
    char name[50];
    // float percentage;ṇ

} Student;

// print function
void printData(Student *ptr)
{
    // print
    for (int i = 0; i < 5; i++)
    {
        // printf("Roll:%d\n", ptr[i].roll);
        // printf("Name:%s\n", ptr[i].name);


         printf("Roll:%d\n", (ptr+i)->roll);
        printf("Name:%s\n", (*(ptr+i)).name);
    }
}

void main()
{
    Student s[5];

    //   accpet data from user
    for (int i = 0; i < 5; i++)
    {

        printf("Enter roll");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("Enter name");
        gets(s[i].name);
    }

    //    printfunction calling  here we create array so pass the base address
    printData(s);
}