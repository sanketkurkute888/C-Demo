#include <stdio.h>
// function decleration
void SimpleInterest(float, float, float);

// main
void main()
{
    float principle, rate, time;
    printf("Enter Principle amount:=");
    scanf("%f", &principle);
    printf("Enter the rate:=", &rate);
    scanf("%f", &rate);
    printf("Enter the time:=", &time);
    scanf("%f", &time);
    SimpleInterest(principle, rate, time);
}

// function defination
void SimpleInterest(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    printf("Simple Interest: %f", si);
}