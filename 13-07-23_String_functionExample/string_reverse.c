#include <stdio.h>
void StringToLowerCase(char *str1);
void main()
{
    char str[50];
    int i = 0;
    printf("Enter the string:\n");
    gets(str);
    StringToLowerCase(str);
    puts(str);
    
}

void StringToLowerCase(char *str1)
{
    int len=0,i=0,temp;
   while (str1[len]!='\0')
    {
        len++;
    }
    // printf("%d",len);
    
    while (i <len/2)
    {
      temp=str1[i];
      str1[i]=str1[len-1-i];
      str1[len-1-i]=temp;
      i++;
    }   
}