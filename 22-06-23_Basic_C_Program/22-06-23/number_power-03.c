#include <stdio.h>
// function decleration
void NumberPower(int number,int power);

// main
int main(int argc, char const *argv[])
{
    int number,power;
    printf("Enter the number");
    scanf("%d", &number);
    printf("Enter the power");
    scanf("%d", &power);
    NumberPower(number,power);
}

// function defination
void NumberPower(int number,int power) // 5 3
{
    int i,ans=1;
    for (i=1;i<=power;i++) //1 2 3
    {
        /* code here */
       ans=ans*number;//  1*5=5  5*5=25 5*25=125
    }
   printf("Ans=%d",ans);
}