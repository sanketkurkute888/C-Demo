#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,*ptr,sum=0;
  printf("Enter the number of element in the array:\n");
  scanf("%d",&n);
  *ptr = (int *)calloc(n, sizeof(int));
  
  if (ptr == NULL)
  {
    printf("Memory allocation failed!\n");
    exit(0);
  }

  {
    printf("Enter the element of array");
    for (int i = 0; i < n; i++) {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
      
    }
    printf("Sum=%d",sum);
  }
  
  
  free(ptr);
}