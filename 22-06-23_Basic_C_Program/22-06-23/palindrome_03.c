#include <stdio.h>
// function decleration
void Palindrome(int number);

// main
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    Palindrome(number);
}

// function defination
void Palindrome(int number) // 5
{
    int i,rem,sum=0,temp=number;
    for (;number>0;) 
    {
        /* code here */
        rem =number%10;
        sum=sum*10+rem;
        number=number/10;
        
    }
    if(sum==temp)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}