#include <stdio.h>
int main(void)
{
    // variable 
    int ask_i, ask_j;

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
            ask_j++;
        }
        ask_i++;
        printf("\n\n");
    }
    return 0;
}