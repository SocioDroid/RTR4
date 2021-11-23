#include<stdio.h>

int main(void)
{
    // Variable Declaration
    int ask_i = 5;
    float ask_f = 3.9f;
    double ask_d = 12.00023;
    char ask_c = 'A';

    // code
    printf("\n\n");

    printf("ask_i = %d\n", ask_i);
    printf("ask_f = %f\n", ask_f);
    printf("ask_d = %lf\n", ask_d);
    printf("ask_c = %c\n", ask_c);

    printf("\n\n");

    ask_i = 43;
    ask_f = 4.23f;
    ask_d = 26.132132;
    ask_c = 'H';

    printf("ask_i = %d\n", ask_i);
    printf("ask_f = %f\n", ask_f);
    printf("ask_d = %lf\n", ask_d);
    printf("ask_c = %c\n", ask_c);

    printf("\n\n");

    return(0);
}