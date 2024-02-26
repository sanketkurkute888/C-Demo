#include <stdio.h>
// function decleration
void febonacci(int terms);

// main
int main()
{
    int terms;
    printf("Enter the number");
    scanf("%d", &terms);
    febonacci(terms);
}

// function defination
void febonacci(int terms) // 5
{
    int a = 0, b = 1, c, i;
    printf("%d\t", a);
    printf("%d\t", b);
    for (i = 3; i <= terms; i++) // 5%2==1 5%3=2 5%4=1
    {
        /* code here */
        c = a + b;
        printf("%d \t",c);
        a = b;
        b = c;
    }
}