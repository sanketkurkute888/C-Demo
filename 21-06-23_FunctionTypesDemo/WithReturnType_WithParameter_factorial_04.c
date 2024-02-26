#include<stdio.h>
//without return type and without parameter

//function decleration
void factorial();

// main
void main()
{
    // function calling
    factorial();
}

// function defination
void factorial()
{ 
    int no,i,fact;

    printf("Enter the number");
    scanf("%d",&no);
    // logic to calclating factorail
    for ( i = 0; i <=no ; i++) {
        /* code here */ 
        fact=fact*i;
    }

    printf("Factorial %dis:=%d",no,fact);
  

}