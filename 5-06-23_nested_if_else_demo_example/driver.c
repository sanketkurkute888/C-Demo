#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  age;
    char gender,maried_status;
    printf("Enter your choice 1)married-m 2)unmarried-u");
    scanf("%c", &maried_status);
    if (maried_status == 'u')
    {
        printf("choice your gender 1)male-m 2)female-f");
        scanf("%d", &gender);
       
        if (gender == 'm' || gender == 'f')
        {
             printf("Enter your age");
                scanf("%d", &age);
            if (gender == 1)
            {    
                
                if (age > 30)
                {
                    printf("insured");
                    /* code */
                }
                else
                {
                    printf("invalid driver");
                }
            }
            else
            {
                if (age > 25)
                {
                    printf("insured");
                    /* code */
                }
                else
                {
                    printf("invalid driver");
                }
            }
        }
        else
        {
            printf("Invalid gender chosen");
        }
        /* code */
    }
    else
    {
        printf("You are married: insured");
    }

    return 0;
}


