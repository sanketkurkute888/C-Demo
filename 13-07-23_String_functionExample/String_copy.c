#include <stdio.h>
void StringCopy(char *str3, char *str4)
{
    int i = 0;
    while (str3[i] != '\0')
    {
        str4[i] = str3[i];
        i++;
    }
  
}

void main()
{
    char str[50], str1[50], i;
    printf("Enter city  name:\n");
    scanf("%s", str);
    fflush(stdin);
    
    StringCopy(str, str1);
    printf("%s", str1);
}

