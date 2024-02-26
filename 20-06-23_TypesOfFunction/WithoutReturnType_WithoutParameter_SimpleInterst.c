#include<stdio.h>
//function decleration 
// void SimpleInterest();
// function defination
void SimpleInterest()
{
    float principle,rate,time,si;
    printf("Enter the principle,rate,time\n");
    scanf("%f%f%F",&principle,&rate,&time);
      si=(principle*rate*time)/100;
      printf("Simple Interest:%f\n ",si);
}

//main
void main()
{
    SimpleInterest();
    printf("End...");
}
