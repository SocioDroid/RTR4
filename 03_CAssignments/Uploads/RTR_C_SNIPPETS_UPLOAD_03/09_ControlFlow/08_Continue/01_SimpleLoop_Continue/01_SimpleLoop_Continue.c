#include <stdio.h>
int main(void)
{
    // variable declarations
    int ask_i;

    // code
    printf("\n\n");

    printf("Printing Even numbers from 10to 150 : \n\n");
    for(ask_i = 10; ask_i <= 150; ask_i++)
    {
        if(ask_i % 2)
            continue;
        else
            printf("\t%d\n", ask_i);
    }
    printf("\n\n");

    return 0;
}