#include<stdio.h>
int main(void)
{
    // variable declarations
    int ask_num1, ask_num2, ask_num3;

    // code
    ask_num1 = 9;
    ask_num2 = 30;
    ask_num3 = 30;

    // First if-else pair
    printf("\n\n");
    if(ask_num1 < ask_num2)
    {
        printf("Entering first if-block .... \n\n");
        printf("A is less than B !!! \n\n");
    }
    else
    {
        printf("Entering first else-block..\n\n");
        printf("A is NOT less than B !!! \n\n");
    }
    printf("First if-else pair Done !!! \n\n");

    // Second if-else PAIT
    printf("\n\n");
    if(ask_num2 != ask_num3)
    {
        printf("Entering Second if-block ... \n\n");
        printf("B is NOT equal to P !!! \n\n");
    }
    else
    {
        printf("Entering second else-block ... \n\n");
        printf("B is NOT equal to P !!!\n\n");
    }
    printf("Second if-else pair done !!!\n\n");

    return 0;
}
