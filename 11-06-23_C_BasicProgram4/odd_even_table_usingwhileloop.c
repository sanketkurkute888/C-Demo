#include <stdio.h>
void main()
{
    int no, i = 1;
    printf("Enter the number:");
    scanf("%d", &no);
    printf("ODD\tEVEN\n");
    while (i <= no)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d\t", i);
        }

        i++;
    }
}