#include <stdio.h>
int main(void)
{
    // variable 
    int ask_i, ask_j, ask_k;

    //code
    printf("\n\n");
    ask_i = 1; 
    while(ask_i <= 10) 
    {
        printf("ask_i = %d\n", ask_i);
        printf("---------------\n\n");
        ask_j = 1; 
        while(ask_j <= 5) 
        {
            printf("\task_j = %d\n", ask_j);
            printf("\t---------------\n\n");
            ask_k = 1; 
            while(ask_k <= 3)
            {
                printf("\t\task_k = %d\n", ask_k);
                ask_k++;
            }
            printf("\n\n");
            ask_j++;
        }
        ask_i++;
        printf("\n\n");
    }
    return 0;
}