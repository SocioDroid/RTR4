#include <stdio.h>
int main(void)
{
    // variable declarations

    int ask_i;

    // code
    printf("\n\n");

    printf("Printing Digits 10 to 1 : \n\n");
    ask_i = 10;
    while(ask_i >= 1)
    {
        printf("\t%d\n", ask_i);
        ask_i--;
    }

    printf("\n\n");
    return 0;
}