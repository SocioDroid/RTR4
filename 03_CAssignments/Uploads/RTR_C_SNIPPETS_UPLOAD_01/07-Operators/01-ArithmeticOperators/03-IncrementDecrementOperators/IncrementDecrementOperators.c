#include<stdio.h>

int main(void)
{
    int ask_a = 5;
    int ask_b = 10;

    //code
    printf("\n\n");
    printf("A = %d\n", ask_a);
    printf("A = %d\n", ask_a++);
    printf("A = %d\n", ask_a);
    printf("A = %d\n\n", ++ask_a);
    
    printf("B = %d\n", ask_a);
    printf("B = %d\n", ask_a--);
    printf("B = %d\n", ask_a);
    printf("B = %d\n\n", --ask_a);

    return 0;
}