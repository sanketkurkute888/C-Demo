#include<stdio.h>
int main(int argc, char const *argv[])
{   int no;
    printf("Enter the number of rows");
    scanf("%d",&no);
    for (int i = 1; i <=no ; i++) { //1 2 3 4 5  exit6
        /* code here */ 
        for (int j = 1; j <=i ; j++) {  // 1 2 3 4 
            /* code here */ 
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
// *
// * *
// * * *
// * * * * 
// * * * * *  