#include<stdio.h>
void main()
{
    int ans=1,power,no;
    printf("Enter the number:");
    scanf("%d",&no);
    printf("\nEnter the power of number:");
    scanf("%d",&power);
    for (int i = 1; i <=power; i++) 
    {
        ans=ans*no; 
        /* code */  
    }
    printf("%d",ans);
}