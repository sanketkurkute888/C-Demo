#include<stdio.h>
#include<string.h>
 int main() 
 {

    int i,temp;
 
    char reverse[12];
    char len=0;
    printf("Enter string");
    gets(reverse);

    while (reverse[len]!='\0')
    {
        len++;
    }
    // printf("%d",reverse);
    for(i=0;i<len/2;i++)
    {
        // printf("hello");
        temp=reverse[i];
        reverse[i]=reverse[len-1-i];
        reverse[len-1-i]=temp;

    }
    
  puts(reverse);
    return 0;

}