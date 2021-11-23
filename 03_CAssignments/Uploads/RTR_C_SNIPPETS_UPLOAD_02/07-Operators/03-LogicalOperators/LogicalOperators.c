#include<stdio.h>

int main(void)
{
    // variable declarations
    int ask_a;
    int ask_b;
    int ask_c;
    int result;

    // code
    printf("\n\n");
    printf("Enter First integer : ");
    scanf("%d", &ask_a);

    printf("\n\n");
    printf("Enter Second integer : ");
    scanf("%d", &ask_b);

    printf("\n\n");
    printf("Enter Third integer : ");
    scanf("%d", &ask_c);

    printf("\n\n");
    printf("If answer  = 0, it is 'FALSE'. \n");
    printf("If answer  = 1, it is 'TRUE'. \n\n");

    result = (ask_a <= ask_b) && (ask_b != ask_c);
    printf("Logical AND (&&) : Answer is TRUE if and only if both conditions are TRUE. THe answer is FALSE, if any one or both conditions are FALSE\n\n");
    printf("A = %d is less than or equal to B = %d and B = %d is not equal to C = %d \t Answer = %d\n\n", ask_a, ask_b, ask_b, ask_c, result);

    result = (ask_b >= ask_a) || (ask_a == ask_c);
    printf("Logical OR (||) : Answer is TRUE if any one or both conditions are TRUE. The answer is FALSE, if and only if both conditions are FALSE\n\n");
    printf("Either B = %d is greater than or equal to A = %d OR A = %d is equal to C = %d \t Answer = %d\n\n", ask_b, ask_a, ask_a, ask_c, result);
  
    result = !ask_a;
    printf("A = %d and using logical NOT (!) operator gives result = %d\n\n", ask_a, result);  
  
    result = !ask_b;
    printf("B = %d and using logical NOT (!) operator gives result = %d\n\n", ask_b, result);
  
    result = !ask_c;
    printf("C = %d and using logical NOT (!) operator gives result = %d\n\n", ask_c, result);
   
    result = (!(ask_a <= ask_b) && !(ask_b != ask_c));
    printf("Using logical NOT (!) on (a <= b) and also on (b != c) and then AND-ing them afterwards gives result = %d \n", result);

    printf("\n\n");

    result = !((ask_b >= ask_a) || (ask_a == ask_c));
    printf("Using logical NOT (!) on entire logical expression (b >=a) || (a == c) gives result = %d \n", result);

    printf("\n\n");

    return 0;
}