#include <stdio.h>
int main(void)
{
    // variable 
    int ask_i, ask_j;

    //code
    printf("\n\n");
    for(ask_i = 1; ask_i <= 10; ask_i++)
    {
        printf("ask_i = %d\n", ask_i);
        printf("---------------\n\n");
        for(ask_j = 1; ask_j <= 5; ask_j++)
        {
            printf("\task_j = %d\n", ask_j);
        }
        printf("\n\n");
    }
    return 0;
}