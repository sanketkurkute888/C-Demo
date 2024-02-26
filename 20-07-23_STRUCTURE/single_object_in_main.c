#include<stdio.h>

typedef struct student
{
    int sid;
    char name[40];
}student;
void main()
{
     student s1;
    // scan
    printf("Enter id");
    scanf("%d",&s1.sid);
    fflush(stdin);
    printf("Enter name:");
    gets(s1.name);

    // print
    printf("\nStudent id   :  %d\n",s1.sid);
    printf("Student name :  %s",s1.name);
    
}

