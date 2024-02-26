#include <stdio.h>
typedef struct Employee
{
    char Ename[50];
    int Enumber, EBasicSalary, EDA, EIncomeTax;

} Employee;

// defination of scanning
void scanEmployee(Employee *x)
{
    printf("Enter Employee number");
    scanf("%d", &x->Enumber);
    fflush(stdin);
    printf("Enter name of Employee");
    gets(x->Ename);
    printf("Enter Basic salary:");
    scanf("%d", &x->EBasicSalary);
    fflush(stdin);
    printf("Enter DA:");
    scanf("%d", &x->EDA);
    fflush(stdin);
    printf("Enter Income Tax:");
    scanf("%d", &x->EIncomeTax);

    // return x;
}
// calculating net salary
float CalculateNetSalary(Employee *p)
{
    return ((p->EBasicSalary + p->EDA) - p->EIncomeTax);
}

// print data
Employee PrintEmployee(Employee *p, float *NetSalary)
{
    printf("*******************Details of Employee************************\n");
    printf("Employee Name: %s\n", p->Ename);
    printf("Employee number: %d\n", p->Enumber);
    printf("Basic Slary: %d\n", p->EBasicSalary);
    printf("Employee DA: %d\n", p->EDA);
    printf("Income Tax: %d\n", p->EIncomeTax);
    printf("Net Salary: %f\n", *NetSalary);
}

// main function
void main()
{
    Employee E;
    float NetSalary;
    // scanning funcction
    scanEmployee(&E);
    NetSalary = CalculateNetSalary(&E);
    PrintEmployee(&E, &NetSalary);
}