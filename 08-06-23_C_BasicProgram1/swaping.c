#include <stdio.h>
void main()
{

    int a=0,b=1,c;
    //  printf("Enter the number");
    // scanf("%d",&no);
    printf("%d\t",a);
    printf("%d",b);
   
    for (int i = 2; i <= 10; i++)
    {
       c=a+b;
       printf("\t%d",c);
       a=b;
       b=c;
       
    }
    
}