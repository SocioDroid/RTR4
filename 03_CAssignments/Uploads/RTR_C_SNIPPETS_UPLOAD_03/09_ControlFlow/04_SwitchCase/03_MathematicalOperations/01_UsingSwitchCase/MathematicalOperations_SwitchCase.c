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

    switch(ask_option)
    {
        // Fall through for A & a
        case 'A':
        case 'a':
            ask_result  = ask_a + ask_b;
            printf("Addition of A = %d and B = %d gives result %d !!!!\n\n", ask_a, ask_b, ask_result);
        
        // Fall through for S & s
        case 'S':
        case 's':
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

        // Fall through for M & m
        case 'M':
        case 'm':
            ask_result  = ask_a * ask_b;
            printf("Multiplication of A = %d and B = %d gives result %d !!!!\n\n", ask_a, ask_b, ask_result);
        
        // Fall through for D & d
        case 'D':
        case 'd':

            printf("Enter option in character : \n\n");
            printf("'Q' or 'q' or '/' for quotient upon division : \n");
            printf("'R' or 'r' or '%%' for remainder upon division : \n");

            printf("Enter option : ");
            ask_option_division = getch();

            printf("\n\n");

            switch(ask_option_division)
            {
                // Fall through for quotient
                case 'Q':
                case 'q':
                case '/':
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
                    break; // break for quotient
                
                // Fall through for quotient
                case 'R':
                case 'r':
                case '%':
                    if( ask_a >= ask_b)
                    {
                        ask_result = ask_a % ask_b;
                        printf("Division of A = %d by B = %d gives Remainder = %d \n", ask_a, ask_b, ask_result);
                    }
                    else
                    {
                        ask_result  = ask_b % ask_a;
                        printf("Division of B = %d and A = %d gives Remainder = %d !!!!\n\n", ask_b, ask_a, ask_result);
                    }
                    break; // break for quotient
                
                default: // default case for division switch
                    printf("Invalid character %c entered for division!! Please try again ... \n\n", ask_option_division);
                    break; // break of default switch : division
            }
            break; // break of case D or case d
        default: // default case for switch (ask_option)
             printf("Invalid character %c entered !! Please try again ... \n\n", ask_option);

    } // Ending curly brace of switch(ask_option)

    printf("Switch case block complete !!! \n\n");

    return 0;

}