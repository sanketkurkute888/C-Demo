#include <stdio.h>
void main()
// {
//     int n, temp, max = 0;
//     int a[5];
//     printf("enter element");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }

//     }
//     printf("Max Element From Array=%d", max);
// }
{
    int a[5];
    int min;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
       
    }
     printf("max=%d", min);
}