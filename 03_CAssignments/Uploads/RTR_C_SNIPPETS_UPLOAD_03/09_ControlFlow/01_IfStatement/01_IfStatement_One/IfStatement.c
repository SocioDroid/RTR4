#include<stdio.h>
int main(void)
{
    int ask_num1, ask_num2, ask_num3;

    ask_num1 = 9;
    ask_num2 = 30;
    ask_num3 = 30;

    printf("\n\n");

    if(ask_num1 < ask_num2)
    {
        printf("A is less than B !!! \n");
    }

    if(ask_num2 != ask_num3)
    {
        printf("B is NOT equal to P !!! \n\n");
    }

    printf("Both comparisons have been done !!! \n\n");

    return 0;
}
