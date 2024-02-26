#include <stdio.h>

void main()
{
  
    int no,no1, fact;
    printf("Enter the number:\n");
    scanf("%d%d", &no,&no1);
    
   swapingnumber(&no,&no1);
   printf("a=%d\tb=%d", no,no1);
}
int swapingnumber(int *no,int *no1)
{
   
    int temp; 
   temp=*no;
   *no=*no1;
   *no1=temp;
}