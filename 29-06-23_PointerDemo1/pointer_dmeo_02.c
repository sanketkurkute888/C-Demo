#include <stdio.h>
void main()
{
    int x = 10;
    int *y = &x;
    int **z=&y;
    printf("%d\n", x);  // 10
    printf("%u\n", &x); // 3760192804
    printf("%u\n", y); //3760192804
    printf("%d\n", *y);//10
    printf("%u\n", &y);//3760192792
    printf("%u\n",**z);//10
    printf("%u\n",&*z);
    printf("%u\n",**z);
    
   
}