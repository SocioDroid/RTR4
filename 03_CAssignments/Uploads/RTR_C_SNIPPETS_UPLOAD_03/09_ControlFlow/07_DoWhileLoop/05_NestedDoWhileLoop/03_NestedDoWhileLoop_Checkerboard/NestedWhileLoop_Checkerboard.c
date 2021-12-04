#include <stdio.h>
int main(void)
{
    // variable
    int ask_i, ask_j, ask_c;

    // code
    printf("\n\n");
    ask_i = 0; 
    do 
    {
        ask_j = 0; 
        do
        {
            ask_c = ((ask_i & 0x8) == 0) ^ ((ask_j & 0x8) == 0);

            if( ask_c == 0 )
                printf(" ");
            
            if( ask_c == 1)
                printf("* ");
            
            ask_j++;
        }while(ask_j < 64);
        printf("\n\n");
        ask_i++;
    }while(ask_i < 64);
    return 0;
}