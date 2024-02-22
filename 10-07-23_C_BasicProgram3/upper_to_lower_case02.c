#include<stdio.h>
void main()
{
    char person[50],i=0;
    printf("Enter the person name");
    scanf("%s",person);
    // gets(person);
    while (person[i]!='\0') 
    {
       if((person[i]>='A'&& person[i]<'Z'))
       {
        person[i]=person[i]-32;
       }
       i++;
    }
    
    printf("The total character in  given string:%s",person);//total count of
   
}