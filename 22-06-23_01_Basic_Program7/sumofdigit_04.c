#include <stdio.h>
// function decleration
int SumOfDigit(int *number);

// main
int main()
{
    int number, sum;
    printf("Enter the number:");
    scanf("%d", &number);
    sum = SumOfDigit(&number);
    printf("Sum of Digit:%d",sum);
}

// function defination
int SumOfDigit(int *number) // 5
{
    int i, rem, sum = 0;
    for (; *number > 0;)
    {
        /* code here */
        rem =*number % 10;
        sum = sum + rem;
        *number =*number / 10;
    
    }
    return sum;
}