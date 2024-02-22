#include<stdio.h>
void main()
{   int no,fact=1,i=1;
    // accept value from user
    printf("Enter the number whose factorial you want to print:\n");
    scanf("%d",&no);
    while (i<=no)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
}