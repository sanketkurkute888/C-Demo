#include <stdio.h>
// function defination
int Prime();

// main
void main()
{
    int falg;
    falg = Prime();
}

// function defination
int Prime()
{

    int no, flag = 0;
    printf("Enter the number:\n");
    scanf("%d", &no);
    for (int i = 2; i < no; i++)
    {
        /* code here */
        if (no % i == 0)
        {
            /* code */
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        /* code */ printf("Number is prime");
    }
    else
    {
        /* code */ printf("Number is not prime");
    }
    return flag;
}