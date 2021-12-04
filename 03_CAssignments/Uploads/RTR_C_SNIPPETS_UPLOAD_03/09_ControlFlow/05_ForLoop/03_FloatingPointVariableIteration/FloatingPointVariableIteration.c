#include <stdio.h>
int main(void)
{
    // variable declarations

    float ask_f;
    float ask_f_num = 23.1f;

    // code
    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", ask_f_num, (ask_f_num * 10.0f));

    for(ask_f = ask_f_num; ask_f <= (ask_f_num * 10.0f); ask_f += ask_f_num)
        printf("\t%f\n", ask_f);

    printf("\n\n");
    return 0;
}