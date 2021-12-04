#include <stdio.h>
int main(void)
{
    // variable declarations
    char ask_option, ask_ch = '\0';

    // code

    printf("\n\n");
    printf("Once the infinite loop begins, enter 'Q' or 'q' to quit the infinite for loop : \n\n");

    do
    {
        do // Infinite loop
        {
            printf("\n");
            printf("In loop .... \n");
            ask_ch = getch(); // Waiting for input character            
        }while(ask_ch != 'Q' && ask_ch != 'q');

        printf("\n\n");
        printf("Exiting user controlled infinite loop....");
        
        printf("\n\n");
        printf("Do you want to begin user controlled infinite loop again ? ...");
        ask_option = getch();
    }while(ask_option == 'Y' || ask_option == 'y');
    
    return 0;
}