#include <stdio.h> // printf()
#include <conio.h> // getch()

int main(void)
{
    // variable declarations

    int ask_a, ask_b;
    int ask_result;

    char ask_option, ask_option_division;

    //code
    printf("\n\n");

    printf("Enter value for A : ");
    scanf("%d", &ask_a);

    printf("Enter value for B : ");
    scanf("%d", &ask_b);

    printf("Enter option in character : \n\n");
    printf("'A' or 'a' for Addition \n\n");
    printf("'S' or 's' for Subtraction \n\n");
    printf("'M' or 'm' for Multiplication \n\n");
    printf("'D' or 'd' for Division \n\n");

    printf("Enter option : ");
    ask_option = getch();

    printf("\n\n");

    if(ask_option == 'A' || ask_option == 'a')
    {
        ask_result  = ask_a + ask_b;
        printf("Addition of A = %d and B = %d gives result %d !!!!\n\n", ask_a, ask_b, ask_result);
        
    }
    else if(ask_option == 'S' || ask_option == 's')
    {
        if(ask_a >= ask_b)
        {
            ask_result  = ask_a - ask_b;
            printf("Subtracting of B = %d from A = %d gives result %d !!!!\n\n", ask_b, ask_a, ask_result);
        }
        else
        {
            printf("Subtracting of A = %d from B = %d gives result %d !!!!\n\n", ask_a, ask_b, ask_result);
            ask_result  = ask_b - ask_a;
        }
    }
    else if(ask_option == 'M' || ask_option == 'm')
    {
        ask_result  = ask_a * ask_b;
        printf("Multiplication of A = %d and B = %d gives result %d !!!!\n\n", ask_a, ask_b, ask_result);        
    }
    else if(ask_option == 'D' || ask_option == 'd')
    {
        printf("Enter option in character : \n\n");
        printf("'Q' or 'q' or '/' for quotient upon division : \n");
        printf("'R' or 'r' or '%%' for remainder upon division : \n");

        printf("Enter option : ");
        ask_option_division = getch();

        printf("\n\n");

        if(ask_option_division == 'Q' || ask_option_division == 'q' || ask_option_division == '/')
        {
            if( ask_a >= ask_b)
            {
                ask_result = ask_a / ask_b;
                printf("Division of A = %d by B = %d gives Quotient = %d \n", ask_a, ask_b, ask_result);
            }
            else
            {
                ask_result  = ask_b / ask_a;
                printf("Division of B = %d and A = %d gives Quotient = %d !!!!\n\n", ask_b, ask_a, ask_result);
            }
        }
        else if(ask_option_division == 'R' || ask_option_division == 'r' || ask_option_division == '%')
        {
            if( ask_a >= ask_b )
            {
                ask_result = ask_a % ask_b;
                printf("Division of A = %d by B = %d gives Remainder = %d \n", ask_a, ask_b, ask_result);
            }
            else
            {
                ask_result  = ask_b % ask_a;
                printf("Division of B = %d and A = %d gives Remainder = %d !!!!\n\n", ask_b, ask_a, ask_result);
            }
        }
        else
            printf("Invalid character %c entered for division!! Please try again ... \n\n", ask_option_division);
    }
    else
        printf("Invalid character %c entered !! Please try again ... \n\n", ask_option);

    printf("Switch case block complete !!! \n\n");

    return 0;

}