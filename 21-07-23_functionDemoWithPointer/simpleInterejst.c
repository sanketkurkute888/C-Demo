#include <stdio.h>
#include <stdlib.h>
void simpleInterest(int *principle, int *rate, int *time)
{
    int *si = (int *)malloc(sizeof(float));
    *si = ((*principle) * (*rate) * (*time)) / 100.0;
    printf("principle amount=%d", *si);
    free(si);
}

void main()
{
   
    int *principle = (int *)malloc(sizeof(int));
    int *rate = (int *)malloc(sizeof(int));
    int *time = (int *)malloc(sizeof(int));

  
    printf("Enter the principle:");
    scanf("%d", &(*principle));
    printf("Enter the rate:");
    scanf("%d", &(*rate));
    printf("Enter the the time:");
    scanf("%d", &(*time));

    // function call
    simpleInterest(principle, rate, time);

    free(principle);
    free(rate);
    free(time);
}