#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,i;
    // size of array
    printf("Enter the size of the array");
    scanf("%d",&size);

    // create memory dynamically
    int *arr1=(int *)calloc(size,sizeof(int));
    int *arr2=(int *)calloc(size,sizeof(int));

    // accpting origanal array element from user and copy into anoteher array
    for ( i = 0; i < size; i++) {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];

    }

    // print the element of copying array
    for ( i = 0; i < size; i++) {
        printf("%d\n",arr2[i]);
    }
    
}