#include<stdio.h>
// function decleration
void PrimeNumber(int no);

// main
void main()
{
    int no;
    // ask to user enter the value
    printf("Enter the number:\n");
    scanf("%d",&no);
    PrimeNumber(no);
}

// function 
void PrimeNumber(int no)
{
    int flag=0;
    for (int i = 2; i <no ; i++) {
        /* code here */
        if(no%i==0) 
        {
            flag=1;
        }
       if (flag==0)
       {
        printf("Number prime");
       }
       else
       {
        printf("Not prime");
       }
       
    }
}