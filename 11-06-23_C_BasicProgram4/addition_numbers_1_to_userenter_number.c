#include<stdio.h>
void main()
{
    int no,i=0,add=0;
    printf("Enter the number:\n");
    scanf("%d",&no);
    while (i<=no)
    {
        add=add+i;
        i++;
    }
    printf("%d",add);
}