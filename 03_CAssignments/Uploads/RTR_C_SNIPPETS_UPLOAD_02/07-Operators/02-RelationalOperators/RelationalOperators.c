#include<stdio.h>

int main(void)
{
    // variable declarations
    int ask_a;
    int ask_b;
    int result;

    // code
    printf("\n\n");
    printf("Enter one integer : ");
    scanf("%d", &ask_a);

    printf("\n\n");
    printf("Enter second integer : ");
    scanf("%d", &ask_b);

    printf("\n\n");
    printf("If answer  = 0, it is 'FALSE'. \n");
    printf("If answer  = 1, it is 'TRUE'. \n\n");

    result = (ask_a < ask_b);
    printf("(ask_a < ask_b) A = %d is less than B = %d      \t Answer = %d\n", ask_a, ask_b, result);
    
    result = (ask_a > ask_b);
    printf("(ask_a > ask_b) A = %d is greater than B = %d      \t Answer = %d\n", ask_a, ask_b, result);

    result = (ask_a <= ask_b);
    printf("(ask_a <= ask_b) A = %d is less than or equal to B = %d      \t Answer = %d\n", ask_a, ask_b, result);

    result = (ask_a >= ask_b);
    printf("(ask_a >= ask_b) A = %d is greater than or equal to B = %d      \t Answer = %d\n", ask_a, ask_b, result);

    result = (ask_a == ask_b);
    printf("(ask_a == ask_b) A = %d is equal to B = %d      \t Answer = %d\n", ask_a, ask_b, result);

    result = (ask_a != ask_b);
    printf("(ask_a != ask_b) A = %d is not equal B = %d      \t Answer = %d\n", ask_a, ask_b, result);

    return 0;

}