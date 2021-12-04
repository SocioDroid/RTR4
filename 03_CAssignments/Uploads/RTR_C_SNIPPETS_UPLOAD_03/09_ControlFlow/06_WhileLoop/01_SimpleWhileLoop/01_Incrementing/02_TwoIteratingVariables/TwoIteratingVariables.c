#include <stdio.h>
int main(void)
{
    // variable declarations

    int ask_i, ask_j;

    // code
    printf("\n\n");
    ask_i = 2;
    ask_j = 20;
    printf("Printing Digits 2 to 9 and 20 to 90 : \n\n");
    while(ask_i <= 10, ask_j <= 90)
    {
        printf("\t %d \t %d\n", ask_i, ask_j);
        ask_i++;
        ask_j += 10;
    }

    printf("\n\n");
    return 0;
}