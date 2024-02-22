#include <stdio.h>
int main()
{
    int no, rem, temp,sum=0;
    printf("Enter the number:\n");
    scanf("%d", &no);  //121
    temp=no;         // temp=121
    for (;no>0;)   // 121>0 , 12>0 ,1>0
    {
        rem = no % 10;   //121%10=1 , 12%10=2 ,1%10=1
        sum=(sum*10)+rem;   // (0*10)+1=1 ,  (1*10)+2=12, (12*10)+1=121
        no = no / 10;    //   121/10=12,  12/10=1 , 1/10=1
      
    }
    if (sum==temp)  // 121==121
    {
        printf("Number is palindrome");
    }
    else
    {
       printf("Number is not palindrome");
    }
    

    // // printf("%d",no);
    // printf("%d", no);

    return 0;
}
