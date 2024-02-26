#include <stdio.h>
#include <string.h>
typedef struct Student
{
	int Hour, Min, Sec;
} Student;
void main()
{
	Student c1;
	Student c2;
	Student c3;
	printf("Enter 1 Time(HH:MM:SS)");
	scanf("%d%d%d", &c1.Hour, &c1.Min, &c1.Sec);
	printf("Enter 2 Time(HH:MM:SS)");
	scanf("%d%d%d", &c2.Hour, &c2.Min, &c2.Sec);             // 24 if we want time between 24 hours
	c3.Hour=c1.Hour+c2.Hour+(c1.Min+c2.Min+(c1.Sec+c2.Sec)/60)/60;  
	c3.Min=(c1.Min+c2.Min+(c1.Sec+c2.Sec)/60)%60;
    c3.Sec=(c1.Sec+c2.Sec)%60;
    printf("\n The Time After Addition %d:%d:%d \n \n",c3.Hour,c3.Min,c3.Sec); 
}