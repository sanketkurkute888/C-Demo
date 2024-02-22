#include <stdio.h>
void main()
{
    char str[50], choice;
    int i, ctr = 0,flag=0;

    printf("Enter the string: ");
    gets(str);
    printf("Enter letter: ");
    scanf("%c", &choice);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (choice == str[i])
        {
            ctr++;
            flag=1;
        }
    }
    if(flag==1)
    {
    printf("Total number of character:%d", ctr);
    }
    else
    {
        printf("Invalid enter");
    }
}