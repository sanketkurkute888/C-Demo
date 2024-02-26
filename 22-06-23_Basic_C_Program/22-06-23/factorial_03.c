#include <stdio.h>
// function decleration
void factorail(int no);

// main
int main(int argc, char const *argv[])
{
    int no;
    printf("Enter the number");
    scanf("%d", &no);
    factorail(no);
}

// function defination
void factorail(int no)//5
{
    int fact=1,i;
    for ( i = 1; i <=no; i++) // 5%2==1 5%3=2 5%4=1 
    {
        /* code here */
      fact=fact*i;
    }
    printf("Factorial:%d",fact);
}