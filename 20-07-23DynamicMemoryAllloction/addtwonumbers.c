#include <stdio.h>
#include <stdlib.h>
void main()
{
    // int *no1 = (int *)malloc(sizeof(int));
    // int *no2 = (int *)malloc(sizeof(int));
    //  int *result = (int *)malloc(sizeof(int));
    // printf("Enter the 1 number:");
    // scanf("%d", &(*no1));
    // printf("Enter the 2 number:");
    // scanf("%d", &(*no2));

    // // (*result)=(*no1)+(*no2);
    // printf("Addition of the number is=%d",((*no1)+(*no2)));

    // free(no1);
    // free(no2);


// *********************************************************************
    int *no1 = (int *)malloc(sizeof(int));
    int *no2 = (int *)malloc(sizeof(int));
    int *no3 = (int *)malloc(sizeof(int));
    // printf("Enter the 1 number:");
    // scanf("%d", &(*no1));
    // printf("Enter the 2 number:");
    // scanf("%d", &(*no2));
    *no1=34;
    *no2=34;

    printf("%d", (*no1) + (*no2));
    free(no1);
    free(no2);
}
