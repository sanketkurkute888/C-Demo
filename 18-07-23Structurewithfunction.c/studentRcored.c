#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int roll, p, c, m;
    char name[50];
    // float percentage;ṇ

} Student;

Student scanStudent(Student x)
{
    printf("Enter roll");
    scanf("%d", &x.roll);
    fflush(stdin);
    printf("Enter name");
    gets(x.name);
    printf("Enter Physics mark:");
    scanf("%d", &x.p);
    fflush(stdin);
    printf("Enter Chemistry mark:");
    scanf("%d", &x.c);
    fflush(stdin);
    printf("Enter Math mark:");
    scanf("%d", &x.m);

    return x;
}

// percentage calculation
float Precentage(Student x)
{
 return((x.p + x.c + x.m) / 300.0) * 100;
   
}

Student PrintStudent(Student x, float p)
{
    printf("Roll:%d\n", x.roll);
    printf("Name:%s\n", x.name);
    printf("Percentage=%f\n", p);
}

void main()
{
    Student s;
    double p;
    
    s = scanStudent(s);
     PrintStudent(s,0);
    p = Precentage(s);
    PrintStudent(s, p);
}
