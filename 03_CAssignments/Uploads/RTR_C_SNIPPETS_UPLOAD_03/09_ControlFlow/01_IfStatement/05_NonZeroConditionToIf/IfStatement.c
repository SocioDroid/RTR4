#include<stdio.h>
int main(void)
{
    // variable declarations
    int ask_num;

    // code
    printf("\n\n");

    ask_num = 5;
    if(ask_num) // Non Zero positive value
    {
        printf("If-Block 1: 'NUM' exists and has value = %d !!! \n\n", ask_num);
    }

    ask_num = -5;
    if(ask_num) // Non-zero negative value
    {
        printf("If-Block 2: 'NUM' exists and has value = %d !!!\n\n", ask_num);
    }

    ask_num = 0;
    if(ask_num)
    {
        printf("If-Block 3: 'NUM' exists and has value = %d !!! \n\n", ask_num);
    }
    printf("All three if-statements are done!!! \n\n");

    return 0;
}
