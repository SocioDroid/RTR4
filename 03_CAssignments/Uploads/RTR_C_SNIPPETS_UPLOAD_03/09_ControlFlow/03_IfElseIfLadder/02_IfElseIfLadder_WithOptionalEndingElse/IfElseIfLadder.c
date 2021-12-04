#include <stdio.h>

int main(void)
{
    // variable declarations;
    int ask_number;

    // code
    printf("\n\n");

    printf("Enter value for 'ask_number': ");
    scanf("%d", &ask_number);

    // If - Else - If ladder start: 

    if(ask_number < 0)
        printf("Number = %d is less than 0 (NEGATIVE) !!!\n\n", ask_number);
    else if((ask_number > 0 ) && (ask_number <= 100))
        printf("Number = %d is between 0 and 100 !!!\n\n", ask_number);
    else if((ask_number > 100 ) && (ask_number <= 200))
        printf("Number = %d is between 100 and 200 !!!\n\n", ask_number);
    else if((ask_number > 200 ) && (ask_number <= 300))
        printf("Number = %d is between 200 and 300 !!!\n\n", ask_number);
    else if((ask_number > 400 ) && (ask_number <= 500))
        printf("Number = %d is between 400 and 500 !!!\n\n", ask_number);
    else if((ask_number > 600 ) && (ask_number <= 700))
        printf("Number = %d is between 600 and 700 !!!\n\n", ask_number);
    else if(ask_number > 700 )
        printf("Number = %d is greater than 700 !!!\n\n", ask_number);
    else // Terminating else of If - else - If ladder !!! ***
        printf("Invalid value entered \n\n!!!");

    return 0;
}