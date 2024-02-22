#include <stdio.h>
void main()
{
    int no,fact = 1;
    float sum = 0,  inv_fact,add=0,final_sum;;
    printf("Enter the number:");
    scanf("%d", &no);
    printf("factorail number\t Inverse factoral \t i=1,3,5\t i=0,2,4 \n");
    for (int i = 1; i <= no; i++)
    {
        /* code here */
        // Finding the factorail of number
        fact = fact * i;
        printf("%d\t\t\t\t",fact);

        // Inverse factorial
        inv_fact = i / (float)fact;
        printf("%f\t", inv_fact);

        // sum of all term upto user enter number
        if(i%2!=0)
        {
        sum = sum + inv_fact;
        printf("%f\t", sum);
        }
        else{
            add=add+inv_fact;
            printf("\t\t%f\t", add);
           }
        printf("\n");
    }
   

    final_sum=sum-add;
    printf("\nFINAL SUM:%f",final_sum);
}