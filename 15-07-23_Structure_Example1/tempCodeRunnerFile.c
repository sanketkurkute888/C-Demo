#include <stdio.h>
#include <string.h>
typedef struct Student
{
    int Hour, Min, Sec;
} Student;

void main()
{

    Student c;
    printf("Enter Time(HH:MM:SS)");
    scanf("%d%d%d", &c.Hour, &c.Min, &c.Sec);
    // 
    // if(((h>24) || (h<0)) || ((m>60) || (m<0)) || ((s>60) || (s<0)))
	// {
	// printf("\n The Time %d:%d:%d You Entered is NOT Correct \n \n",h,m,s);  
	// }
	// else 
	// {
	// printf("\n The Time %d:%d:%d You Entered is Correct \n \n",h,m,s); 
	// }

    if(((c.Hour>24) || (c.Hour<0)) || ((c.Min>60) || (c.Min<0)) || ((c.Sec>60) || (c.Sec<0)))
	{
	printf("\n The Time %d:%d:%d You Entered is NOT Correct \n \n",c.Hour,c.Min,c.Sec);  
	}
	else 
	{
	printf("\n The Time %d:%d:%d You Entered is Correct \n \n",c.Hour,c.Min,c.Sec); 
	}
}