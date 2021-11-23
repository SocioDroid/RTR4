#include<stdio.h>

int main(void)
{
    // Function prototyping
    void PrintBinaryFormOfNumber(unsigned int);

    // variable declarations
    unsigned int ask_a;
    unsigned int ask_num_bits;
    unsigned int result;

    // code
    printf("\n\n");
    printf("Enter an integer : ");
    scanf("%u", &ask_a);

    printf("\n\n");
    printf("By how many bits do you want to shift A = %d to the left ? ", ask_a);
    scanf("%u", &ask_num_bits);

    printf("\n\n\n");
    result = ask_a << ask_num_bits;
    printf("Bitwise LEFT-SHIFTing of \nA = &d (Decimal) by = %d bits gives result %d (Decimal). \n\n", ask_a, ask_num_bits, result);

    PrintBinaryFormOfNumber(ask_a);
    PrintBinaryFormOfNumber(result);

    return(0);

}

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    // variable declarations
    unsigned int quotient, remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    // code
    for( i = 0; i < 8; i++)
    {
        binary_array[i] = 0;
    }

    printf("The binary form of the decimal integer %d is \t=\t", decimal_number);
    num = decimal_number;
    i = 7;
    while(num !=0 )
    {
        quotient = num / 2;
        remainder = num % 2;
        binary_array[i] = remainder;
        num = quotient;
        i--;
    }

    for(i = 0; i<8; i++)
    {
        printf("%u", binary_array[i]);
    }

    printf("\n\n");
}