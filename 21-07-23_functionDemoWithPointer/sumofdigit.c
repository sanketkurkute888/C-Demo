#include <stdio.h>
#include <stdlib.h>
void sumofDigit(int *no)
{
    int *sum = (int *)malloc(sizeof(int));
    int *rev = (int *)malloc(sizeof(int));
    *sum = 0;
    for (; (*no) > 0;)
    {
        (*rev) = (*no) % 10;
        (*sum) = (*sum) + (*rev);
        (*no) = (*no) / 10;
    }
    printf("Additon number:%d", (*sum));
    free(sum);
    free(rev);
}

void main()
{
    int *no = (int *)malloc(sizeof(int));
    // int *i = (int *)malloc(sizeof(int));

    printf("Enter the number:");
    scanf("%d", &(*no));
    sumofDigit(no);
    
    free(no);
    // free(i);
    
}