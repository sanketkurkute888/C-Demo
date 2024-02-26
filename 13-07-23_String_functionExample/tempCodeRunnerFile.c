#include<stdio.h>
int StringLength(char *ptr);
void main()
{
    char str[100];
    int i;
    printf("Entre the string:\n");
    scanf("%s",str);
    

    i=StringLength(str);
    printf("String Length:%d",i);
}
// function defination
int StringLength(char *ptr)
{
    int i=0;
   while (ptr[i]!='\0')
    {
        i++;
    }
    // printf("%d",i);
    return i;
}
