#include<stdio.h>
int main(void)
{

    printf("\n\n");
    printf("********************************************************\n");
    printf("\n\n");

    printf("Hello World!!! \n\n");

    int ask_a = 13;
    printf("Integer Decimal value of 'ask_a' = %d\n", ask_a);
    printf("Integer Octal value of 'ask_a' = %o\n", ask_a);
    printf("Integer Hexadecimal Value of 'ask_a' [Hexadecimal letters in lower case] = %x\n", ask_a);
    printf("Integer Hexadecimal Value of 'ask_a' [Hexadecimal letters in upper case] = %X\n", ask_a);


    char ask_ch = 'A';
    printf("Character ask_ch = %c\n", ask_ch);
    char ask_str[] = "AstroMediComp's Real Time Rendering Batch";
    printf("String str = %s\n\n", ask_str);

    long ask_num = 44423123L;
    printf("Long Integers = %ld\n\n", ask_num);

    unsigned int ask_b = 7;
    printf("Unsigned Integer 'b' = %u\n\n", ask_b);

    float ask_f_num = 123.3121f;
    printf("Floating point number with Just %%f 'ask_f_num' = %f\n", ask_f_num);
    printf("Floating point number with %%4.2f 'ask_f_num' = %4.2f\n", ask_f_num);
    printf("Floating point number with %%6.6f 'ask_f_num' = %6.6f\n", ask_f_num);

    double ask_d_pi = 3.14159265358979323846;
    printf("Double precision Floating point number without exponential = %g\n", ask_d_pi);
    printf("Double precision Floating point number with exponential (Lower Case) = %e\n", ask_d_pi);
    printf("Double precision Floating point number with exponential (Upper Case) = %E\n", ask_d_pi);
    printf("Double Hexadecimal value of 'ask_d_pi' (Hexadecimal Letters in Lower Case) = %a\n", ask_d_pi);
    printf("Double Hexadecimal value of 'ask_d_pi' (Hexadecimal Letters in Upper Case) = %A\n", ask_d_pi);

    printf("**************************************************************\n");
    printf("\n\n");
    return 0;
}