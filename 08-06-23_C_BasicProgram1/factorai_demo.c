#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,f=1;
    float sum=0,add=0;
    printf("\n Enter the length:");
    scanf("%d",&n);
    printf("fact\t 1/fact\n");
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("%d\t",f);
       
        sum=1.0/f;
        printf("=%f\n",sum);

        add=add+(1.0/f);
    }
   printf("--------------\n");
    printf("\t=%f",add);
    return 0;
}
    