#include <stdio.h>
#include <string.h>
typedef struct Student
{
    int roll;
    char name[50];
    int physics, chemistry, math;
    float percentage;
    // int total_marks = 300;

} Student;

void main()
{
     Student s;
    printf("Enter the 1 subject mark:");
    scanf("%d", &s.physics);

    printf("Enter the 2 subject mark:");
    scanf("%d", &s.math);

    printf("Enter the 3 subject mark:");
    scanf("%d", &s.chemistry);

    // p.percentage = (s.chemistry + s.math + s.physics) / s.total_marks * 100;

    s.percentage = ((s.math + s.chemistry + s.physics) / 300.0) * 100;
    printf("\n***********************************************************\n");
  
    printf("Roll:%d\t", s.roll);
    printf("Name:%s\t", s.name);
    // printf("Physics%d\t", s.physics);
    // printf("chemistry%d\t", s.chemistry);
    // printf("math:%d\t", s.math);
    // printf("total:%d\t", s.total);
    printf("Percentage:%f\t", s.percentage);
}