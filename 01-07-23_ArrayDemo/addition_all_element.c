#include<stdio.h>
void main()
{
    int i;
    int arr[5],sum=0;
    printf("Enter 5 element");
    for (i = 0; i <=4; i++) {
        /* code here */
        scanf("%d",&arr[i]);
    }
    i=0;
    printf("Element of the array");
     for ( i = 0; i <=4; i++) {//

        /* code here */
        // sum+=arr[i];
        sum=sum+arr[i]; //  0+1=1   1+2=3
    //    printf("sum=%d\t",sum);

    }
 printf("sum=%d\t",sum);
}
