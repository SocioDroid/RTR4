#include<stdio.h>
int main(void)
{
    //variable declarations
    int ask_var;
    
    //code
    printf("\n\n");

    printf("Enter Value for 'num' : ");
    scanf("%d", &ask_var);

    if(ask_var < 0) // if 01
    {
        printf("Num = %d if less than 0 (NEGATIVE) !!! \n\n", ask_var);
    }
    else // else 01
    {
        if((ask_var > 0) && (ask_var <= 100)) // if 02
        {
            printf("Num = %d is between 0 and 100 !!! \n\n", ask_var);
        }
        else // else 02
        {
            if((ask_var > 100) && (ask_var <= 200)) // if 03
            {
                printf("Num = %d is between 100 and 200 !!! \n\n", ask_var);
            }
            else // else 03
            {
                if((ask_var > 200) && (ask_var <= 300)) // if 04
                {
                    printf("Num = %d is between 200 and 300 !!! \n\n", ask_var);
                }
                else // else 04
                {
                    if((ask_var > 300) && (ask_var <= 400)) // if 05
                    {
                        printf("Num = %d is between 300 and 400 !!! \n\n", ask_var);
                    }
                    else // else 05
                    {
                        if((ask_var > 400) && (ask_var <= 500)) // if 06
                        {
                            printf("Num = %d is between 300 and 400 !!! \n\n", ask_var);
                        }
                        else // else 06
                        {
                            printf("Num = %d is greater than 500 !!! \n\n", ask_var);
                        } // Closing brace of else 06
                    } // Closing brace of else 05
                } // Closing brace of else 04
            } // Closing brace of else 03
        } // Closing brace of else 02
    } // Closing brace of else 01
}