#include <stdio.h>
// function decleration
int factorail(int no);

// main
int main(int argc, char const *argv[])
{
    int no, fact;
    printf("Enter the number");
    scanf("%d", &no);
    fact = factorail(no);
    printf("Factorial of number:%d",fact);
}

// function defination
int factorail(int no) // 5
{
    int fact = 1, i;
    for (i = 1; i <= no; i++) // 5%2==1 5%3=2 5%4=1
    {
        /* code here */
        fact = fact * i;
    }
    return fact;
}