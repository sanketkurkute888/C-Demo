#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
void primenumber(int *no)
{

    int *flag = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));
    (*flag) = 0;
    for ((*i) = 2; (*i) < (*no); (*i)++)
    {
        if ((*no) % (*i) == 0)
        {
            (*flag) = 1;
        }
    }
    if (*flag == 0)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Numbe is not  prime");
    }
    free(i);
    free(flag);
}

void main()
{a
    int *no = (int *)malloc(sizeof(int));
    printf("Enter the number:");
    scanf("%d", &(*no));

    primenumber(no);

    free(no);
    // free(i);
    // free(flag);
       // }
}
