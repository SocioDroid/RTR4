#include <stdio.h>
#include <conio.h>


int main(void)
{
    // variable declarations
    int ask_i;
    char ask_ch;

    // code
    printf("\n\n");

    printf("Printing even numbers from 100 to 200 for every user input. Exitting the loop when user enters character Q or q : \n\n");
    printf("Enter character Q or q to exit loop : \n\n");

    for( ask_i = 1; ask_i <= 100; ask_i++ )
    {
        printf("\t%d\n", ask_i);
        ask_ch = getch();
        if(ask_ch == 'Q' || ask_ch == 'q')
            break;
    }

    printf("\n\n");
    printf("Exitting loop");
    printf("\n\n");
    
    return 0;
}
