#include <stdio.h>
// function decleration
void SumOfDigit(int number);

// main
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    SumOfDigit(number);
}

// function defination
void SumOfDigit(int number) // 5
{
    int i,rem,sum=0;
    for (;number>0;) 
    {
        /* code here */
        rem =number%10;
        sum=sum+rem;
        number=number/10;
        
    }
    printf("%d",sum);
}