#include <stdio.h>
void main()
{
    int no,fact = 1;;
    float sum = 0,  inv_fact;
    printf("Enter the number:");
    scanf("%d", &no);
    printf("factorail number\t Inverse factoral \t Upto sum \n");
    for (float i = 1.0; i <= no; i++)
    {
        /* code here */
        // Finding the factorail of number
        fact = fact * i;
        printf("%d\t\t\t\t", fact);

        // Inverse factorial
        inv_fact = i / fact;
        printf("%f\t", inv_fact);

        // sum of all term upto user enter number
        sum = sum + inv_fact;
        printf("%f\n", sum);
    }
    // printf("%d\n",fact);
    // printf("%f\n",inv_fact);
    // printf("%f\n",sum);
}