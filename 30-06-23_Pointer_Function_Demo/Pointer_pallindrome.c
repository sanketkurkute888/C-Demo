#include <stdio.h>
int isAmstrong(int *n)
{

    int temp = *n;
    int sum = 0, rem;
    while (*n != 0)
    {

        rem = *n % 10;
        sum = sum * 10 + rem;
        *n = *n / 10;
    }
    return (sum == temp) ? 1 : 0;
}

int main()
{
    int number, palindrome;

    printf("Enter a positive interger: ");
    scanf("%d", &number);

    palindrome = isAmstrong(&number);

   
    if (palindrome == 1)
    {
        printf("pallindrome");
    }
    else
    {
        /* code */ printf("Not pallindrome");
    }

    return 0;
}