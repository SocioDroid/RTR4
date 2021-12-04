#include <stdio.h>
int main(void)
{
    // variable 
    int ask_i, ask_j;

    //code
    printf("\n\n");

    ask_i = 1; 
    
    do
    {
        printf("ask_i = %d\n", ask_i);
        printf("---------------\n\n");
        ask_j = 1; 
        do
        {
            printf("\task_j = %d\n", ask_j);
            ask_j++;
        }while(ask_j <= 5);
        ask_i++;
        printf("\n\n");
    }while(ask_i <= 10);
    return 0;
}