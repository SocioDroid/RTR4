#include <stdio.h>

int main(void)
{
    //Variable Declarations
    int ask_i, ask_j;
    char ask_ch_01, ask_ch_02;

    int ask_a, ask_result_int;
    float ask_f, ask_result_float;

    int ask_i_explicit;
    float ask_f_explicit;


    //Code

    printf("\n\n");

    //interconversion and implicit type casting between 'char' & 'int' types ...
    ask_i = 70;
    ask_ch_01 = ask_i;
    printf("I = %d\n", ask_i);
    printf("Character 1(after ask_ch_01 = i) = %c\n\n", ask_ch_01);

    ask_ch_02 = 'Q';
    ask_j = ask_ch_02;
    printf("Character 2 = %c\n", ask_ch_02);
    printf("J (after j = ask_ch_02) = %d\n\n", ask_j);

    //Implicit conversion of 'int' to 'float'
    ask_a = 5;
    ask_f = 7.8f;
    ask_result_float = ask_a + ask_f;
    printf("Integer a = %d and Floating-Point number %f added gives floating-point sum = %f\n\n", ask_a, ask_f, ask_result_float );

    ask_result_int = ask_a + ask_f;
    printf("Integer a = %d and floating point number %f added gives integer sum = %d \n\n", ask_a, ask_f, ask_result_int);

    // Explicit Type Casting using cast operator..
    ask_f_explicit = 60.123456f;
    ask_i_explicit = (int) ask_f_explicit;
    printf("Floating Point number which will be type casted explicitly = %f\n", ask_f_explicit);
    printf("Resultant Integer after explicit type casting of %f = %d\n\n", ask_f_explicit, ask_i_explicit);

    return 0;

}