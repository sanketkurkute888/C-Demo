#include<stdio.h>
// function defination
int SimpleInterest();

// void main
void main()
{ float simple_interest;
  simple_interest=SimpleInterest();
  printf("Simple interest of enter amount is:%f",simple_interest);
}
// function defination
int SimpleInterest()
{
    // Accepting the principle amount,rate,time from user
    float principle,rate,time,simple_interest;
    printf("Enter the principle amount,rate,time\n");
    scanf("%f%f%f",&principle,&rate,&time);

    // calculating simple interest
    simple_interest=(principle*rate*time)/100;
    return simple_interest;
}