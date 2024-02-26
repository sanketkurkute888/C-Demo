#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, *ptr,max,i;
    printf("How many element of the array");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter the array element:\n");
    for ( i = 1; i <n; i++)
    {
        scanf("%d\n", ptr + i);
    }
    max=*(ptr+0);
    printf("Enter the array element:\n");
    for ( i = 0; i <n; i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
       
    }
     printf("Maximum Element =%d\t",max);
     free(ptr);
}