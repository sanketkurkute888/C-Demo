#include <stdio.h>
// function decleration
void ReverseNumber();

// main
void main()
{
   ReverseNumber();
}
// function defination
void ReverseNumber()
{
    int no, rev_num = 0, rev;
    // Accepting number from user
    printf("Enter the number whose addition of all digits you want:\n");
    scanf("%d", &no); // 456

    // calculating addition of digit
    for (int i = 1; i < no; i++)
    { // 1  2 3 4
        /* code here */
        rev = no % 10;           // 45n6%10=6   45%10=5  4%10=4
        rev_num = rev_num*10 + rev; //  6=0*10+6  65 =6*10+5   654=65*10+4
        no = no / 10;            // 456/10=45   45/10=4  4/10=0
    }
    printf("Reverse number:%d",rev_num);
}