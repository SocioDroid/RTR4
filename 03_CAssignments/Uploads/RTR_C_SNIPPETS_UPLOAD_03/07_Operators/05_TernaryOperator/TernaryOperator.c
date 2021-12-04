#include<stdio.h>

int main(void)
{
    // variable declarations
    int num1, num2;
    int num3, num4;
    char cRes1, cRes2;
    int iRes1, iRes2;

    // code
    printf("\n\n");

    num1 = 21;
    num2 = 7;
    cRes1 = (num1 > num2) ? 'A' : 'B';
    iRes1 = (num1 > num2) ? num1 : num2;

    printf("Ternary operator Answer 1 -------- %c and %d.\n\n", cRes1, iRes1);

    ask_p = 57;
    num4 = 71;

    cRes2 = (ask_p != num4) ? 'P' : 'Q';
    iRes2 = (ask_p != num4) ? ask_p : num4;
    printf("Ternary operator Answer 2 ----- %c and %d.\n\n", cRes2, iRes2);

    printf("\n\n");
    return(0);
}