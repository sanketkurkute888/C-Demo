#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *ptr=(int *)malloc(sizeof(int));
    (*ptr)=10;
    printf("value=%d",*ptr);
    free(ptr);
}