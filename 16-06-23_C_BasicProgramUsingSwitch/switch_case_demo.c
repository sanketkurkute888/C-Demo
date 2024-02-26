#include <stdio.h>
void main()
{
    int no, number, fact = 1, power, Ans = 1, num, a = 0, b = 1, c;
    char ch;
    do
    {
        printf("1->Factorial\n");
        printf("2->power\n");
        printf("3->fibonacci\n");
        printf("4->even_odd\n");
        scanf("%d", &no);

        // while (choice == 1)
        // {
        /* code */

        switch (no)
        {
        case 1:
        {
            printf("Enter the number\n"); // accept number from user
            scanf("%d", &number);
            for (int i = 1; i <= number; i++)
            { // 1 2 3 4 5
                /* code here */
                fact = fact * i; //
            }
            printf("%d\n", fact);
            break;
        }
        case 2:
        {
            int ans = 1, power, no;
            printf("Enter the number:");
            scanf("%d", &no);
            printf("\nEnter the power of number:");
            scanf("%d", &power);
            int i = 1;
            while (i <= power)
            // for (int i = 1; i <=power; i++)
            {
                ans = ans * no;
                /* code */
                i++;
            }
            printf("%d", ans);
            break;
        }
        case 3:
        {
            printf("Enter the number\n"); // Logic of fibonacci series
            scanf("%d", &number);
            printf("%d\t", a);                // 0
            printf("%d\t", b);                // 1
            for (int i = 2; i <= number; i++) // 2 3 4 5 6 7
            {
                c = a + b;         // 0+1= 1  2=1+1  3=1+2  5=2+3  8=3+5
                printf("%d\t", c); // 1  2  3  5 8
                a = b;             //  a=1  a=1  a=2  a=3  a=5
                b = c;             //  b=1  b=2  b=3  b=5  b=8
            }
            break;
        }
        case 4:
        {
            printf("Enter the number\n"); // accept number from user
            scanf("%d", &number);
            if (number % 2 == 0)
            {
                printf("You Enter Even Number");
            }
            else
            {
                printf("You Enter Odd Number");
            }
            break;
        }

        default:
        {
            printf("Invalild enter");
            break;
        }
        }
       printf("y->continue n->Exit");
       fflush(stdin);
       scanf("%c",&ch);
    }while(ch=='y');
}
