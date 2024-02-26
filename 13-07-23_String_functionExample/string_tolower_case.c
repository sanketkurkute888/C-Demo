#include <stdio.h>
void StringToLowerCase(char *str1);
void main()
{
    char str[50];
    int i = 0;

    printf("Enter the string:\n");
    scanf("%s",str);

    fflush(stdin);

    // function calling
    StringToLowerCase(str);

    puts(str);
}

void StringToLowerCase(char *str1)
{
    int len = 0;
    while (str1[len] != '\0')
    {
        if (str1[len] >= 'A' && str1[len] <= 'Z')
        {
            str1[len] = str1[len] + 32;
        }
        len++;
    }
}