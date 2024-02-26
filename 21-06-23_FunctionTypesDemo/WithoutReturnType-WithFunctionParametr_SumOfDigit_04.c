// 
#include<stdio.h>
// function decleration
void SumOfDigit(int no);


void main()
{
    int no;
    // calling the function
    printf("Enter the number:\n");
    scanf("%d",&no);
    SumOfDigit(no);
    
}

// void defination
void SumOfDigit(int no)
{
int sum,rev;
 while (no>0)
 {
    rev=no%10;
    sum=sum+rev;
    no=no/10;
 }
 printf("%d",sum); 
}