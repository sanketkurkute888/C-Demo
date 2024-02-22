#include<stdio.h>
void main()
{
    char str[50];
    printf("Enter city name:\n");
    // scanf("%s",str);
    gets(str);
    printf("%s",str);
}