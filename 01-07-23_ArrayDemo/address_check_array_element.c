#include <stdio.h>
void main()
{
    int i;
    int arr[5];
    printf("Enter 5 element");
    for (i = 0; i <=4; i++) {
        /* code here */
        scanf("%d",&arr[i]);
    }
    i=0;
    printf("Element of the array");
     for ( i = 0; i <=4; i++) {
        /* code here */
        printf("%u\t",&arr[i]);
    }
}
