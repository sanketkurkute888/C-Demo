#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--)
        {
              printf(" ");
        }
        for (int k = 1; k <=i ; k++) {
            /* code here */ 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
