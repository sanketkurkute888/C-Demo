#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of element of the array");
    scanf("%d", &n);
    int a[n], b[n], c[n];

    //   1 array
    printf("enter the first array element");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        /* code here */
    }
    // 2 Array
    printf("enter the Second array element");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        /* code here */
    }
//addition
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        /* code here */
    }
    printf("addition of first and second");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", c[i]);
        /* code here */
    }
}

