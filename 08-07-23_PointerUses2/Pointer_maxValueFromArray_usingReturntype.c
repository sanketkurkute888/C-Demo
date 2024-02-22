#include <stdio.h>
int FindMax(int *ptr)
{
    int i, max=*ptr;
    for (i =0 ; i < 5; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    return max;
}
void main()
{
    int max, arr[5];
    printf("Enter array element:\n");
    for (int i = 0; i <5 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = FindMax(arr); // passing base addrerss of the array
    printf("Maximum element from the array:%d", max);
}
