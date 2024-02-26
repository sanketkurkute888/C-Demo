#include <stdio.h>
void main()
{
    int no, ch, first, second, add, third, forth, fifth;
    float ferenhite, celcius, percetage;
    char letter, lowercase;
    do
    {
        printf("1)Addition of two number\n\n");
        printf("2)Swaping of two number\n\n");
        printf("3)Swaping of two number without 3 variable\n\n");
        printf("4)Convert temprature celcius to fernhite\n\n");
        printf("5)Convert temprature fernhite to celcius\n\n");
        printf("6)Total Mark obtain 5 subject and percentage\n\n");
        printf("7)AND OR operation\n\n");
        printf("8)Reverse the number without using for loop\n\n");
        printf("9)Add all digit of the number\n\n");
        printf("9)star triangle \n\n");

        printf("**************************Enter your choice**************************\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the first number\n");
            scanf("%d", &first);

            printf("Enter the second number\n");
            scanf("%d", &second);
            add = first + second;
            printf("Addition of two number:%d", add);
            break;
        }
        case 2:
        {
            printf("Enter the first number\n");
            scanf("%d", &first);

            printf("Enter the second number\n");
            scanf("%d", &second);
            add = first;
            first = second;
            second = add;
            printf("After swaping first number=%d\n", first);
            printf("After swaping second number=%d\n", second);
            break;
        }
        case 3:
        {
            printf("Enter the first number\n");
            scanf("%d", &first);

            printf("Enter the second number\n");
            scanf("%d", &second);
            first = first + second;  // first =10+20=30
            second = first - second; // second=30-20=10
            first = first - second;  //  first=30-10=20
            printf("After swaping first number=%d\n", first);
            printf("After swaping second number=%d\n", second);
            break;
        }
        case 4:
        {
            printf("Enter the temprature in celcius\n");
            scanf("%f", &celcius);
            ferenhite = 9 / 5.0 * celcius + 32;

            printf("Temprature in fernhite=%f\n", ferenhite);
            break;
        }
        case 5:
        {
            printf("Enter the temprature in ferenhite\n");
            scanf("%f", &ferenhite);
            celcius = (ferenhite - 32) * 5 / 9.0;

            printf("Temprature in celcius=%f\n", celcius);
            break;
        }
        case 6:
        {
            printf("Enter the five subject mark\n");
            scanf("%d%d%d%d%d", &first, &second, &third, &forth, &fifth);
            // add=first+second+third+forth+fifth;//40 50 60 70 80
            printf("Addition=%d\n", first + second + third + forth + fifth);                    // 300
            printf("Percetage:%f\n", ((first + second + third + forth + fifth) * 100) / 500.0); //  300*100/500
            break;
        }
        case 7:
        {
            first = 5;
            second = 6;
            third = 8;
            add = ((first < second) && (third > second));
            printf("Result of the AND operator:%d\n", add);
            percetage = ((first > second) | (second > third));
            printf("Rsesult of the OR operator:%d\n", percetage);
            break;
        }
        case 8:
        {

            printf("Enter the  number\n");
            scanf("%d", &no); //   557

            // printf("You enter %d number",no);

            first = no % 10; //  first=557%10=7
            no = no / 10;    //  no=557/10= 55

            second = no % 10; // second=55%10=5
            no = no / 10;     //  no=55/10= 5

            third = no % 10;                         // third=5%10=5
            no = no / 10;                            //  no=5/10= 0
            add = first * 100 + second * 10 + third; // 7*100+5*10+5=700+50+5=755
            printf("Reverse number:%d", add);
            break;
        }
        case 9:
        {

            printf("Enter the  number\n");
            scanf("%d", &no); //   557

            // printf("You enter %d number",no);

            first = no % 10; //  first=557%10=7
            no = no / 10;    //  no=557/10= 55

            second = no % 10; // second=55%10=5
            no = no / 10;     //  no=55/10= 5

            third = no % 10;              // third=5%10=5
            no = no / 10;                 //  no=5/10= 0
            add = first + second + third; // 7+5+5=17
            printf("Addition of all digit :%d", add);
            break;
        }

        case 10:
        {
            for (int i = 1; i <=no ; i++) {
                for (int j = 1; j <=i ; j++) {
                    /* code here */ 
                    printf("*");
                }
                printf("\n");
                /* code here */ 
            }
        }

        default:
        {
            printf("Invalid choice enter:\n");

            break;
        }
        }
        printf("\n******************y->continue n->Exit***************************\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y');
}

//  printf("y->continue n->Exit");
//    fflush(stdin);
//    scanf("%c",&ch);
// }while(ch=='y');