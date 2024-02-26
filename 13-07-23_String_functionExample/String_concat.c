#include <stdio.h>
void StringConcat(char *str3, char *str4);

void main()
{
    char str1[100], str2[50];
    printf("Enter the string 1");
    gets(str1);

    printf("Enter the string 2");
    gets(str2);

    StringConcat(str1, str2);//base address 
    puts(str1); //print()
}

void StringConcat(char *str3, char *str4)
{
    int len = 0, i = 0;
    while (str3[len] != '\0')
    {
        len++;
    }
    
    while (str4[i] != '\0')
    {
        str3[len] = str4[i];
        len++;
        i++;
    }
    str3[len] = '\0';
}


































// #include <stdio.h>
// void main()
// {
//     char str1[100], str2[50];
//     int len = 0, i = 0;
//     printf("Enter first string:\n");
//     gets(str1);
//     fflush(stdin);

//     printf("Enter second string:\n");
//     gets(str2);
//     fflush(stdin);

//     while (str1[len] != '\0')
//     {
//         len++;
//     }
//     while (str2[i] != '\0')
//     {
//         str1[len] = str2[i];
//         len++;
//         i++;
//     }
//     str1[len] = '\0';
//     printf("Join String:%s", str1);
// }