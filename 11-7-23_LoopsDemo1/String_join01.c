#include <stdio.h>
void main()
{
    char str1[100], str2[50];
    int len = 0, i = 0;
    printf("Enter first string:\n");
    gets(str1);
    fflush(stdin);

    printf("Enter second string:\n");
    gets(str2);
    fflush(stdin);

    while (str1[len] != '\0')
    {
        len++;
    }
    while (str2[i] != '\0')
    {
        str1[len] = str2[i];
        len++;
        i++;
    }
    str1[len] = '\0';
    printf("Join String:%s", str1);
}