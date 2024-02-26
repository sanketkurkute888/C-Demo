#include <stdio.h>
// function decleration
int prime(int *no);

// main
void main()
{
    int no, flag;
    printf("Enter the number");
    scanf("%d", &no);
    flag=prime(&no);
    if (flag == 0)
    {
        printf("Not prime");
        
    }
    else
    {
       printf("prime"); 
    }
}

// function defination
int prime(int *no) // 5
{   
    int x, flag = 0, i;
    for (i = 2; i < *no; i++) // 5%2==1 5%3=2 5%4=1
    {
        /* code here */

        if (*no % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // return (flag == 0) ? 1 : 0; // one way
    
    x= (flag == 0) ? 1 : 0; // second way
    return x;
}
