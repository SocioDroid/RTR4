#include <stdio.h>
int main(void)
{
    // variable declarations

    float ask_f;
    float ask_f_num = 43.12f;

    // code
    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", ask_f_num, (ask_f_num * 10.0f));
    ask_f = ask_f_num;
    while(ask_f <= (ask_f_num * 10.0f))
    {
        printf("\t%f\n", ask_f);
        ask_f += ask_f_num;
    }
    printf("\n\n");
    return 0;
}