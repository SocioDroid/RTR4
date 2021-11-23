#include <stdio.h>
int main(void)
{
    // Variable Declarations
    int ask_a;
    int ask_b;
    int ask_result;

    // code
    printf("\n\n");
    printf("Enter a number : ");
    scanf("%d", &ask_a);
 
    printf("\n\n");
    printf("Enter another number : ");
    scanf("%d", &ask_b);

    printf("\n\n");

    ask_result = ask_a + ask_b;
    printf("Addition of %d and %d \t= %d\n", ask_a, ask_b, ask_result);
    
    ask_result = ask_a - ask_b;
    printf("Subtraction of %d and %d \t= %d\n", ask_a, ask_b, ask_result);
    
    ask_result = ask_a * ask_b;
    printf("Multiplication of %d and %d \t= %d\n", ask_a, ask_b, ask_result);
    
    ask_result = ask_a / ask_b;
    printf("Division of %d and %d gives quotient %d\n", ask_a, ask_b, ask_result);
    
    ask_result = ask_a % ask_b;
    printf("Division of %d and %d gives remainder %d\n", ask_a, ask_b, ask_result);

    printf("\n\n");
    return 0;
}