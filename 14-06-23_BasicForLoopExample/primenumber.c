#include <stdio.h>
void main()

{
    int no, flag = 0;
    printf("Enter the number:");
    scanf("%d", &no); // 10

    for (int i = 1; i <= no; i++) // 1
    {                             // 1
        flag = 0;
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                /* code */
                flag = 1;
                break;
            }
            if (flag == 0)
            {
                printf("%d\n", i);
                // break;
            }
            break;
        }
    }
}