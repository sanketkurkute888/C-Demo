#include <stdio.h>
int StringCompare(char *str3, char *str4)
{
    int i = 0, flag = 1;
    while (str3[i] != '\0' && str4[i] != '\0')
    {
        if (str3[i] == str4[i])
        {
            flag = 0;
        
        }
        i++;
    }
    // if (flag == 0)
    // {
    //     printf("Exact Equal");
    // }
    // else
    // {
    //     printf("Not Equal");
    // }
    return flag;
}
void main()
{
    char str[50], str1[50];
    int flag;
    printf("Enter first  string:\n");
    // scanf("%s", str);
    gets(str);
    fflush(stdin);

    printf("Enter second  string:\n");
    // scanf("%s", str1);
    gets(str);
    fflush(stdin);

    flag = StringCompare(str, str1);
    if (flag == 0)
    {
        printf("Exact Equal");
    }
    else
    {
        printf("Not Equal");
    }
}
