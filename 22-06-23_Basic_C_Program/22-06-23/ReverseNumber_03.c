#include <stdio.h>
// function decleration
void ReverseNumber(int number);

// main
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    ReverseNumber(number);
}

// function defination
void ReverseNumber(int number) // 5
{
    int i,rem,sum=0;
    for (;number>0;) 
    {
        /* code here */
        rem =number%10;
        sum=sum*10+rem;
        number=number/10;
        
    }
    printf("Reverse=%d",sum);
}