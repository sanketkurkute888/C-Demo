#include<stdio.h>
void main()
{
    int arr[5],arr1[5];
     printf("Enter elements of array");
    for (int i = 0; i <5; i++) {
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }
    printf("Orignal array");
    for (int i = 0; i <5; i++) {
        printf("\t%d",arr[i]);
    }
    printf("\ncopy array");
    for (int i = 0; i <5; i++) {
        printf("\t%d",arr1[i]);
    }
}

