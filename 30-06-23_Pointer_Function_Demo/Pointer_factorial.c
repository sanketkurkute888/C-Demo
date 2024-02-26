#include <stdio.h>
void main()
{
    int no, fact;
    printf("Enter the number:\n");
    scanf("%d", &no);

    fact = factorail(&no);
    printf("%d",fact);
}
int factorail(int *no)
{
   
    int fact = 1;
    for (int i = 1; i <= *no; i++)
    {
        /* code here */
        fact = fact * i;
    }
    return fact;
}