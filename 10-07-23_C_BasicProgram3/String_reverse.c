#include <stdio.h>
void main()
{
    char str[50], i,count,temp;
    printf("Enter city  name:\n");
    scanf("%s", str);
    while (str[count] != '\0')
    {
        count++;
    }
    // printf("%d",count);
   for (int i = 0; i <count/2 ; i++) {
       temp=str[i];
       str[i]=str[count-1-i];
       str[count-1-i]=temp;
   }
   printf("%s",str);
   
}