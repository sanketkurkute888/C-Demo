#include<stdio.h>
//function decleration 
void factorail();

//main
void main()
{
    factorail();
    printf("End...");
}
// function defination
void factorail()
{
    int n,fact=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
      for (int i = 1; i <=n ; i++) {
          /* code here */
          fact=fact*i; 
      }
      printf("Factorial:%d\n ",fact);
}