#include<stdio.h>
void main()
{   int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    no=(no*(no+1))/2;
    printf("%d",no);
}