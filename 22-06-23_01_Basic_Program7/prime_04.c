#include <stdio.h>
// function decleration
int prime(int no);

// main
int main(int argc, char const *argv[])
{
    int no;
    printf("Enter the number");
    scanf("%d", &no);
    prime(no);
}

// function defination
int prime(int no)//5
{
    int flag = 0,i;
    for ( i = 2; i < no; i++) // 5%2==1 5%3=2 5%4=1 
    {
        /* code here */

        if (no % i == 0)
        {
            flag = 1;
            break;
        }
    }
   if (flag==0)
   {
    printf("prime");
   }
   else
   {
    printf("Not prime");
   }
   
   
}