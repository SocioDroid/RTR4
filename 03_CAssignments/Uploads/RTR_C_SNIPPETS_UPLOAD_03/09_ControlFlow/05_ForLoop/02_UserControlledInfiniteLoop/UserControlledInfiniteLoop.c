#include <stdio.h>
int main(void)
{
    // variable declarations
    char ask_option, ask_ch = '\0';

    // code

    printf("\n\n");
    printf("Once the infinite loop begins, enter 'Q' or 'q' to quit the infinite for loop : \n\n");
    printf("\n\n");
    ask_option = getch();

    if(ask_option == 'Y' || ask_option == 'y')
    {
        for(;;) // Infinite loop
        {
            printf("In loop .... \n");
            ask_ch = getch();
            if(ask_ch == 'Q' || ask_ch == 'q')
                break; // User controlled exit.
        }
    }
    printf("\n\n");
    printf("Exiting user controlled infinite for loop ... ");
    printf("\n\n");

    return 0;
}