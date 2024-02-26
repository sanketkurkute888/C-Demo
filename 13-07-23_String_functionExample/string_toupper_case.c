#include <stdio.h>
void StringToLowerCase(char *str1);
void main()
{
    char str[50];
    int i = 0;
    printf("Enter the string:\n");
    gets(str);
    fflush(stdin);
    StringToLowerCase(str);
    puts(str);
}

void StringToLowerCase(char *str1)
{
    int len = 0;
    while (str1[len] != '\0')
    {
        if (str1[len] >= 'a' && str1[len] <= 'z')
        {
            str1[len] = str1[len] - 32;
        }
        len++;
        
    }
}