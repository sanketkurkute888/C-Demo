#include<stdio.h>
void main()
{
    char city[50],i=0;
    printf("Enter the city name");
    scanf("%s",city);
    // gets(person);
    while (city[i]!='\0') 
    {
        if(city[i]>='a'&&city[i]<='z')
        {
            city[i]+=32;

        }
        i++;
    }
    
   printf("The lower case letter:%s",city);//total count of
   
}