#include <stdio.h>
void main()
{
    char str[50], i;
    printf("Enter city  name:\n");
    scanf("%s", str);
    // gets(str);
    // printf("Person name is %s",str);
    while (str[i] != '\0')
    {
        /* code here */
        i++;
    }
    printf("Person name is %d", i);
}