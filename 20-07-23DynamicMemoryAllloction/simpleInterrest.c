#include <stdio.h>
#include <stdlib.h>
void main()
{
    //    int *ptr=(int *)malloc(sizeof(int));
    int *principle = (int *)malloc(sizeof(int));
    int *rate = (int *)malloc(sizeof(int));
    int *time = (int *)malloc(sizeof(int));
    int *si = (int *)malloc(sizeof(float));
    // (*ptr)=10;
    printf("Enter the principle:");
    scanf("%d", &(*principle));
    printf("Enter the rate:");
    scanf("%d", &(*rate));
    printf("Enter the the time:");
    scanf("%d", &(*time));
    *si = ((*principle) * (*rate) * (*time)) / 100.0;
    printf("principle amount=%d", *si);
    free(si);
    free(principle);
    free(rate);
    free(time);
}