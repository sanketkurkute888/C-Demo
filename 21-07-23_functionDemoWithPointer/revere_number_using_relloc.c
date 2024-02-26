#include <stdio.h>
#include <stdlib.h>
//function decleration
void reversenumber(int *no);

// main function
void main()
{
    int *no;
    no = (int *)malloc(sizeof(int));

    // accepting input from user
    printf("Enter the number:");
    scanf("%d", &(*no));

    // function calling
    reversenumber(no);

    free(no);
}

// function defination
void reversenumber(int *no)
{
    // logic to reverse number
    int *rev = (int *)malloc(sizeof(int));
    int *sum = (int *)malloc(sizeof(int));
    *sum = 0;
    for (; (*no) > 0;)
    {
        (*rev) = (*no) % 10;
        (*sum) = (*sum) * 10 + (*rev);
        (*no) = (*no) / 10;
    }

    printf("Additon number:%d", (*sum));
    free(sum);
    free(rev);
}

