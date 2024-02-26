#include <stdio.h>
// function decleration
void swaping_number(int a,int b);

// main
int main()
{
    int a,b;
    printf("Enter the number1=");
    scanf("%d", &a);
    printf("Enter the number2=");
    scanf("%d", &b);
    swaping_number(a,b);
}

// function defination
                    //  10    20
void swaping_number(int a,int b)//5
{
    int temp;
    temp=a  ;// temp=10
    a=b;      //a=20
    b=temp;   //b=10
    printf("First number=%d\n",a);
    printf("Second number=%d\n",b);
}