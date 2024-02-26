#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *no = (int *)malloc(sizeof(int));
    int *fact = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));
    // *no = 5;
    *fact=1;
    printf("Enter the number:");
    scanf("%d",&(*no));
    for((*i)=1;(*i)<=(*no);(*i)++)
    {
       (*fact)=(*fact)*(*i);
    }

    printf("Factorail of the number is=%d", *fact);
}