#include <stdio.h>
void main()
{
    int n, temp;
    printf("Enter the number of element of the array But array size is 100");
    scanf("%d", &n);
    int a[100];

    printf("enter the first array element");
    for (int i = 0; i < n; i++)

    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)

    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
             {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
             }
           
        }
    }

    printf("Elements");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}