#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,i=1;
    printf("Enter the number whose table you want to print:");
    scanf("%d",&no);
    while (i<=10)
    {
          printf("\n%d*%d=%d\n",no,i,i*no);
                  i++;          /* code */
    }
    
    return 0;
}
