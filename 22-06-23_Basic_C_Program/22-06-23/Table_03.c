#include <stdio.h>
// function decleration
void Table(int number);

// main
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number=");
    scanf("%d", &number);
    Table(number);
}

// function defination
void Table(int number) // 5
{
    int i;
    for (int i = 1; i <= 10; i++)
    {

        printf("%d*%d = %d\n", number, i, number * i);
        /* code here */
    }
}