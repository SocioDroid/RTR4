#include <stdio.h>

int main(void)
{
    // variable declarations
    int ask_a;
    int ask_b;
    int result;

    // code
    printf("\n\n");
    printf("Enter a number : ");
    scanf("%d", &ask_a);
 
    printf("\n\n");
    printf("Enter another number : ");
    scanf("%d", &ask_b);

    printf("\n\n");

    result = ask_a;
    ask_a += ask_b;
    printf("Addition of %d & %d \t=%d\n", result, ask_b, ask_a);
    
    result = ask_a;
    ask_a -= ask_b;
    printf("Subtraction of %d & %d \t=%d\n", result, ask_b, ask_a);
    
    result = ask_a;
    ask_a *= ask_b;
    printf("Multiplication of %d & %d \t=%d\n", result, ask_b, ask_a);

    
    result = ask_a;
    ask_a /= ask_b;
    printf("Division of %d & %d gives quotient %d\n", result, ask_b, ask_a);

    
    result = ask_a;
    ask_a %= ask_b;
    printf("Division of %d & %d gives remainder %d\n", result, ask_b, ask_a);

    printf("\n\n");

    return 0;
}