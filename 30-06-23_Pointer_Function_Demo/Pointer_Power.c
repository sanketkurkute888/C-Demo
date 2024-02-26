#include<stdio.h>
void FindPower(int *n,int *power)
{
    int ans=1;
   for(int i=1;i<=*power;i++)
   {
    ans=*n*ans;
   }
   printf("The reverse of : %d", ans);
 
}

int main()
{
   int number, power;

   printf("Enter a positive interger: ");
   scanf("%d", &number);
   printf("Enter a power: ");
   scanf("%d", &power);

    FindPower(&number,&power);

//    printf("The reverse of %d is: %d", number, reverse);

   return 0;
}