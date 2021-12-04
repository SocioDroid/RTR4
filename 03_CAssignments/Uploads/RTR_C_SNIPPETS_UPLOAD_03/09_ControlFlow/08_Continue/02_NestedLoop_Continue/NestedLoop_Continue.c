#include <stdio.h>
int main(void)
{
    // variable declarations
    int ask_i, ask_j;

    // code
    printf("\n\n");

    printf("Outer loop prints odd numbers between 20 & 30 \n\n");
    printf("Inner loop prints even numbers between 20 & 30 for every odd number printed by outer loop. \n\n");
    printf("Printing Even numbers from 10to 150 : \n\n");

    for(ask_i = 20; ask_i <= 30; ask_i++)
    {
        if(ask_i % 2) // if odd
        {
            printf("\t i = %d\n", ask_i);
            printf("-------------\n");
            for(ask_j = 20; ask_j <= 30; ask_j++)
            {
                if(ask_j % 2) // if odd
                    continue;
                else // even
                    printf("\t\t j = %d\n", ask_j);
            }
        }
        else // even
            continue;
    }
    printf("\n\n");

    return 0;
}