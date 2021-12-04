#include <stdio.h>
int main(void)
{
    // variable declarations

    int ask_i, ask_j;

    // code
    printf("\n\n");

    printf("Printing Digits 10 to 1 and 100 to 10 : \n\n");

    for(ask_i = 10, ask_j = 100; ask_i >= 1, ask_j >= 10; ask_i--, ask_j -= 10)
        printf("\t %d \t %d\n", ask_i, ask_j);

    printf("\n\n");
    return 0;
}