#include <stdio.h>
void main()
{
    int n, temp, min = 0,max;
    int a[5];
    printf("enter element");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    min=max;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum element of the array:%d",min);
}
