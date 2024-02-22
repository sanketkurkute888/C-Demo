#include<stdio.h>
void main()
{
    int no;
    float sum=0,fact=1,inv_fact;
    printf("Enter the number:");
    scanf("%d",&no);
    for (int i = 1; i <=no; i++) {
        /* code here */
    //Finding the factorail of number
        fact=fact*i;
         //printf("%d\n",fact); 

    //Inverse factorial
       inv_fact=1.0/fact;

    //sum of all term upto user enter number
    sum=sum+inv_fact;
    }
    // printf("%d\n",fact); 
    // printf("%f\n",inv_fact); 
      printf("%f\n",sum); 


}