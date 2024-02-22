#include <stdio.h>
void main()
{
    int n,temp;
    // printf("Enter the number of element of the array");
    // scanf("%d", &n);
     int a[5];

    //   1 array
    printf("enter the first array element");
    for (int i = 0; i <5; i++)
    // 0->10   1->20  2->30  3->40  4->50
    {
        scanf("%d", &a[i]);// 10 20 30 40 50
        /* code here */
    }
       
    for (int i = 0; i <5/2; i++)
    // 0->10   1->20  2->30  3->40  4->50
    {
        temp=a[i];  // 10
        a[i]=a[5-1-i];  //  
        a[5-1-i]=temp;
        
        /* code here */
    }




    printf("Elements");
    for (int i = 0; i <5; i++)
    {
        printf("%d", a[i]);
        /* code here */
    }
}