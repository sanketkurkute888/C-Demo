#include <stdio.h>
void main()
{
    char str[50],str1[50], i;
    printf("Enter city  name:\n");
    scanf("%s", str);
    fflush(stdin);
    while (str[i] != '\0')
    {
       str1[i]=str[i];
       i++;
    }
  
   printf("%s",str1);  
}