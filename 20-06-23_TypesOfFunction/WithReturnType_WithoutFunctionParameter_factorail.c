//With reyurn type without function parameter
#include<stdio.h>

//factorail function decleration
int Factorial();

// main function
void main()
{
    int fact_number;
   //function calling
   fact_number=Factorial();
   printf("Factorial: %d",fact_number);
}
// factorial function defination
int Factorial()
{
    int  fact=1,no;
    // Accepting number from user
    printf("Enter the number whose factorail calculating\n");
    scanf("%d",&no);

    // calculating factorail
    for (int i = 1; i <=no ; i++) {
        /* code here */ 
         fact=fact*i;
    }

    // print the factorial
    // printf("Factorial: %d",fact);

    // return value of factorail
    return fact;
   
}