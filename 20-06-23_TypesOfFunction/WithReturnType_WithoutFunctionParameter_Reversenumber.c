//With reyurn type without function parameter
#include<stdio.h>

//function decleration
int ReverseTheNumber();

// main function
void main()
{
    int rev_number;
   //function calling
   rev_number=ReverseTheNumber();
   printf("Reverse of the given number : %d",rev_number);
}
// factorial function defination
int ReverseTheNumber()
{
    int  no,sum=0,rev_sum=0,rev;
    // Accepting number from user
    printf("Enter the number whose Reverese you want:\n");
    scanf("%d",&no);//456

    // calculating addition of digit
    for (int i = 1; i <no ; i++) { //1  2 3 4
        /* code here */ 
         rev=no%10; // 456%10=6   45%10=5  4%10=4
         rev_sum=rev_sum*10+rev; //  6=0*10+6  65 =6*10+5   654=65*10+4
         no=no/10; // 456/10=45   45/10=4  4/10=0
    }

    // print the sum
    // printf("Reverse the number: %d",rev_sum);

    // return value of sum
    return rev_sum;
   
}