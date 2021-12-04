#include <stdio.h>
int main(void)
{
    // variable declarations

    int ask_i;

    // code
    printf("\n\n");

    printf("Printing Digits 1 to 10 : \n\n");
    ask_i = 1;
    do
    {
        printf("\t%d\n", ask_i);
        ask_i++;
    }while(ask_i <= 10);

    printf("\n\n");
    return 0;
}