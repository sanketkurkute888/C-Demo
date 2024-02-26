#include <stdio.h>
void main()
{
    //     int a = 10;
    //     int *ptr;
    //     int **ptr2 = &ptr;
    //     int ***ptr3= &ptr2;
    //     // printf("%d\n", a);
    //     // printf("%u", &a);
    //     ptr = &a;
    //     printf("a = %d\n", a); // 10
    //     printf("a = %d\n", a); // 10
    //     printf("&a = %u\n", &a); // 2
    //     printf("ptr = %u\n", ptr); // 2095916
    //     printf("&ptr = %u\n", &ptr);//
    //     printf("*ptr = %d\n", *ptr);
    // printf("************************************\n");
    //
    //     printf("Ptr2=%u\n",ptr2);
    //     printf("&ptr2 = %u\n",&ptr2);
    //     printf("*ptr2 = %u\n",*ptr2);
    //     printf("**ptr2 = %d\n",**ptr2);

    //     printf("*******************");
    //     (***ptr3)++;

    //     printf("%d", a);

    printf("---------------------------------------------------------\n");
    int a = 10;
    int *ptr = &a;
    int **ptr1=&ptr;
    printf("%d",a);// 10
}