#include <stdio.h>
void main()
{
    char str[50],str1[50], choice;
    int i, ctr = 0,flag=0;

    printf("Enter the string: ");
    gets(str);


    printf("Enter word you want to find: ");
    // scanf("%c", &choice);
      gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str[i])
        {
            // ctr++;

            flag=1;
        }
    }
    // str[i]='\0';
    // str1[i]='\0';
    // printf("%d",flag);
    if(flag==1)
    {
    // printf("Yes present :%d times", ctr);
    printf("Enter word found.");
    }
    else
    {
        printf("Not found");
    }
}