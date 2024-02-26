#include <stdio.h>
#include <stdlib.h>

void factorial(int *no)
{
    int *i = (int *)malloc(sizeof(int));
    int *fact = (int *)malloc(sizeof(int));
    *fact = 1;
    for ((*i) = 1; (*i) <= (*no); (*i)++)
    {
        (*fact) = (*fact) * (*i);
    }
    printf("Factorail of the number is=%d", *fact);
    free(i);
    free(fact);
}

void main()
{

    int *no = (int *)malloc(sizeof(int));

    // *no = 5;

    printf("Enter the number:");
    scanf("%d", &(*no));
    // function calling

    factorial(no);
    free(no);
}