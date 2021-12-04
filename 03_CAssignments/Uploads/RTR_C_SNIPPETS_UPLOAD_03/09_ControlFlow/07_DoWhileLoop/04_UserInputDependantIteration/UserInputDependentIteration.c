#include <stdio.h>
int main(void)
{
    // variable declarations

    int ask_i_num, ask_num, ask_i;

    // code
    printf("\n\n");

    printf("Enter an integer value from which iteration must begin : ");
    scanf("%d", &ask_i_num);

    printf("How many digits do you want to print from %d onwards ? : ", ask_i_num);
    scanf("%d", &ask_num);

    printf("Printing Digits %d to %d : \n\n", ask_i_num, (ask_i_num + ask_num));
    
    ask_i = ask_i_num; 
    do  
    {
        printf("\t%d\n", ask_i);
        ask_i++;
    }while(ask_i <= (ask_i_num + ask_num));  

    printf("\n\n");
    return 0;
}