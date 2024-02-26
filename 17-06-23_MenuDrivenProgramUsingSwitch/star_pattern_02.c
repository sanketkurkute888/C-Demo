#include<stdio.h>
void main()
{
    int i,j,no;
    printf("Enter the number:");
    scanf("%d",&no);
    for (int i = 1; i <=no; i++) {
        /* code here */ 
        for (int j = 0; j <= no-i; j++) {
            /* code here */ printf("*");
        }
        printf("\n");
    }
}