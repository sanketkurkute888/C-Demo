#include<stdio.h>
int main(int argc, char const *argv[])
{   int power,num,i=1,ans=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the power of the number\n");
     scanf("%d",&power);
// ans=num*i;
// num*ans=ans
  for(i=1;i<=power;i++){
    ans=ans*num;
  }
         
    
    printf("%d",ans);
    return 0;
}
