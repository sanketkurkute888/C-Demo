#include <stdio.h>
void main()
{
    char str[50], str1[50];
    int  i=0,flag=0;
    printf("Enter first  string:\n");
    scanf("%s", str);
    fflush(stdin);

    printf("Enter second  string:\n");
    scanf("%s", str1);
    fflush(stdin);

    while (str[i]!='\0' && str1[i]!='\0')
    {
        if (str[i] != str1[i])
        {
           flag=1;
           break;
        }   
        i++;
    }
    if (flag==0)
    {
        printf("Exact Equal");
    }
    else
    {
       printf("Not Equal");
    }
    
}
