#include <stdio.h>
void main()
{
    char str[50], choice;
    int i, digit = 0, vovels=0,consonants=0, special=0;

    printf("Enter the string: ");
    gets(&str);
    // printf("Enter letter:");
    // scanf("%c", &choice);
    for (i = 0; str[i] != '\0'; i++)
    {
        
        if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
           if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
           {
            vovels++;
           }
           else if((str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u')||(str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'))
           {
           consonants++;
           }
        }
         else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("*********************************");
    printf("\nTotal number of digit:%d\n", digit);
    printf("Total number of vovels:%d\n", vovels);
    printf("Total number of consonants:%d\n", consonants);
    printf("Total number of special symbols:%d\n", special);
}