#include <stdio.h>
void main()
{
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("%d\n", a); //  10
    printf("%u\n",&a);//325058036
    // printf("%d",*a); //it gives error
    printf("%u\n", ptr1); //  325058036
    printf("%d\n", *ptr1); // 10
    printf("%u\n", &*ptr1);//325058036

    printf("%u\n", ptr2);//325058024
    printf("%d\n", **ptr2);//10
    printf("%u\n", &*&*ptr2);//325058024

    printf("%u\n", ptr3);//325058016
    printf("%d\n", *ptr3);//325058024
    printf("%d\n", **ptr3);//325058036
    printf("%d\n", ***ptr3);//10
    // printf("%d\n", ****ptr3);
    printf("%d\n", *&*&*&*ptr3);//325058024
}