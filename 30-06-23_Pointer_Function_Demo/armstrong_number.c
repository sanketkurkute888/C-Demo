#include <stdio.h>
int isAmstrong(int *n)
{

    int temp = *n; //153
    int sum = 0, rem; 
    while (*n >0)  //153  15 1
    {

        rem = *n % 10; //  153/10=3   15/10=5 1/10=1
        sum = sum + (rem*rem*rem);  //0+27=27  27+(125)= 152  152+(1)=153
        *n /= 10;//153/10=15   15/10=1
    }
    return (sum == temp) ? 1 : 0;
}

int main()
{
    int number, amstrong;

    printf("Enter a positive interger: ");
    scanf("%d", &number);

    amstrong = isAmstrong(&number);

   
    if (amstrong == 1)
    {
        printf("amstrong");
    }
    else
    {
        /* code */ printf("not amstrong");
    }

    return 0;
}