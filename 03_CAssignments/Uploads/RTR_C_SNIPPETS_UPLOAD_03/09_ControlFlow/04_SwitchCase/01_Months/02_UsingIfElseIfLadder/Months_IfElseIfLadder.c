#include <stdio.h>
int main(void)
{
    // variable declarations
    int ask_iMonth;

    // code
    printf("\n\n");

    printf("Enter the number of Month (1 - 12) : ");
    scanf("%d", &ask_iMonth);

    printf("\n\n");

    // If else if ladder start:

    if(ask_iMonth == 1) // ~ case 1
        printf("Month number %d is January !!! \n\n", ask_iMonth);
    else if(ask_iMonth == 2) // ~ case 2
        printf("Month number %d is February!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 3) // ~ case 3
        printf("Month number %d is March!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 4) // ~ case 4 
        printf("Month number %d is April!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 5) // ~ case 5
        printf("Month number %d is May!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 6) // ~ case 6
        printf("Month number %d is June!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 7) // ~ case 7
        printf("Month number %d is July!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 8) // ~ case 8
        printf("Month number %d is August!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 9) // ~ case 9
        printf("Month number %d is September!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 10) // ~ case 10
        printf("Month number %d is October!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 11) // ~ case 11
        printf("Month number %d is November!!! \n\n", ask_iMonth);
    else if(ask_iMonth == 12) // ~ case 12
        printf("Month number %d is December!!! \n\n", ask_iMonth);
    else // ~ default
        printf("Invalid Month Number %d Entered !!! Please try again....\n\n", ask_iMonth);

    printf("If-Else-If-Else ladder complete !!!\n");
    return 0;
}