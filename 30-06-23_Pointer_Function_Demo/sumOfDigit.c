#include <stdio.h>
int SumOfDigit(int *n)
{
    int sum = 0, rem;
    while (*n != 0)
    {

        rem = *n % 10;
        sum = sum + rem;
        *n = *n / 10;
    }
    return sum;
}

int main()
{
    int number, sum;

    printf("Enter a positive interger: ");
    scanf("%d", &number);

    sum = SumOfDigit(&number);

    printf("The sum : %d", sum);

    return 0;
}