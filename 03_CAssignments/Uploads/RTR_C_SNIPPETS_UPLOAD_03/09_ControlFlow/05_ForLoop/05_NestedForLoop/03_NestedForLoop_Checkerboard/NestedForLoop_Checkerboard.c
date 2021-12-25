#include <stdio.h>
int main(void)
{
    // variable
    int ask_i, ask_j, ask_c;

    // code
    printf("\n\n");
    for(ask_i = 0; ask_i < 64; ask_i++)
    {
        for(ask_j = 0; ask_j < 64; ask_j++)
        {
            ask_c = ((ask_i & 0x8) == 0) ^ ((ask_j & 0x8) == 0);

            if( ask_c == 0 )
                printf(" ");
            
            if( ask_c == 1)
                printf("_ ");
        }
        printf("\n\n");
    }
    return 0;
}