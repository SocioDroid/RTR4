#include <stdio.h>
#include <conio.h>

int main(void)
{
    // variable declarations
    int ask_i, ask_j;

    // code
    printf("\n\n");

    for(ask_i = 1; ask_i <= 20; ask_i++)
    {
        for(ask_j = 1; ask_j <= 20; ask_j++)
        {
            if( ask_j > ask_i)
                break;
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;   
}