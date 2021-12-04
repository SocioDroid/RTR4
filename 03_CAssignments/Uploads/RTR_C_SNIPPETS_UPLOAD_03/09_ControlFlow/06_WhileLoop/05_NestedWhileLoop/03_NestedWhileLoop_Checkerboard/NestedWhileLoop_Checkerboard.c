#include <stdio.h>
int main(void)
{
    // variable
    int ask_i, ask_j, ask_c;

    // code
    printf("\n\n");
    ask_i = 0; 
    while(ask_i < 64) 
    {
        ask_j = 0; 
        while(ask_j < 64) 
        {
            ask_c = ((ask_i & 0x8) == 0) ^ ((ask_j & 0x8) == 0);

            if( ask_c == 0 )
                printf(" ");
            
            if( ask_c == 1)
                printf("* ");
            
            ask_j++;
        }
        printf("\n\n");
        ask_i++;
    }
    return 0;
}