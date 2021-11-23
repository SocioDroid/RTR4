#include<stdio.h>

int main(void)
{
    // code
    printf("\n\n");
    printf("Going to the next line using \\n Escape Sequence\n\n");
    printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
    printf("\"This is a Double Quoted Output\" Done using \\\" \\\" Escape Sequence\n\n");
    printf("\'This is a Single Quoted Output\' Done using \\\' \\\' Escape Sequence\n\n");
    printf("BACKSPACE turned to BACKSPACE\b Using Escape Sequence \\b\n\n");

    printf("\r Demonstrating Carriage Return using \\r Escape Sequence\n");
    printf("Demonstrating \r Carriage return using \\r Escape Sequence \n");
    printf("Demonstrating Carriage \r Return using \\r Escape Sequence \n\n");

    printf("Demonstrating \x41 using \\xhh Escape Sequence \n\n"); //0x41 is the hexadecimal code for letter 'A' . 'xhh' is the placeholder for 'x'. Followed by 2 digits (hh), altogether forming a Hexadecimal Number.
    printf("Demonstrating \102 using \\ooo Escape Sequence \n\n"); //102 is the Octal code for letter 'B'. 'ooo' is the placeholder for 3 digits forming an Octal Number

    return 0;
}