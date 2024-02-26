#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,temp;
    // Enter the size of array 
     printf("Enter the size of array");
     scanf("%d",&size);

    //  dynaically allocate memory for the array
    int *arr=(int *)calloc(size,sizeof(int));

    // acceping element of array from user
    printf("Enter the array element");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    // logic to reverse array element
    for (int i = 0; i < size/2; i++) {
        temp=*(arr+i);
        *(arr+i)= arr[size-1-i] ;
        arr[size-1-i]=temp;
        // printf("%d",&arr[i]);
    }
    // print reverse array
    printf("\n******REVERSE ARRAY**********");
    for (int i = 0; i < size; i++) {
        printf("%d\n",*(arr+i));
    }
    free(arr);
}