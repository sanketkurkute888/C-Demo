#include <stdio.h>
// function defination
int febonacci(int no);

void main()
{
    int no,a;
    printf("Enter the number:\n");
    scanf("%d", &no);
        //  calling of the function
    febonacci(no);
    
}
int febonacci(int no)
{
    //    logic of the febonacci series
    int a = 0, b = 1, c;
    printf("%d\t", a); // 0
    printf("%d\t", b); // 1
    for (int i = 3; i <= no; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    return ;
}