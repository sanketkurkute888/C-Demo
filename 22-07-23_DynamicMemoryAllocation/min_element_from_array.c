#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size,min;
    printf("Enter the size of array");
    scanf("%d", &size);

    //   dynamically allocate memory for array
    int *arr = (int *)calloc(size, sizeof(int));
    
    if (arr == NULL)
    {
      printf("Memory allocation failed!\n");
      exit(0);
    }
    
    printf("Enter the element of the array.\n");
    for (int i = 0; i <size ; i++) {
        scanf("%d",&arr[i]);
    }
    min=*arr;
    printf("element of the array.\n");
    for (int i = 0; i <size ; i++) {
        if(min>*(arr+i))
        {
            min=arr[i];
        }
    }
    printf("Minimum element=%d",min);

    free(arr);
}