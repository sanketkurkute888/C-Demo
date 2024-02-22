#include <stdio.h>
int FindMinimum(int *ptr)
{
    int min =*ptr;

    for (int i = 0; i < 5; i++)
    {
        if (*(ptr+i) < min)
        {
            min = *(ptr+i);
        }
    }
    return min;
}
void main()
{
    int arr[5],min;
    printf("Enter the element of the array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    //    FUNCTION CALLING
    min=FindMinimum(arr);
    printf("Minimum element from given array:%d",min);

}