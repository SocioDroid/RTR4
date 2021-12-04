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

    switch(ask_iMonth)
    {
        case 1: // ~ if
            printf("Month number %d is January !!! \n\n", ask_iMonth);
            break;
        case 2: // ~ else if
            printf("Month number %d is February !!! \n\n", ask_iMonth);
            break;
        case 3: // ~ else if
            printf("Month number %d is March !!! \n\n", ask_iMonth);
            break;
        case 4: // ~ else if
            printf("Month number %d is April !!! \n\n", ask_iMonth);
            break;
        case 5: // ~ else if
            printf("Month number %d is May !!! \n\n", ask_iMonth);
            break;
        case 6: // ~ else if
            printf("Month number %d is June !!! \n\n", ask_iMonth);
            break;
        case 7: // ~ else if
            printf("Month number %d is July !!! \n\n", ask_iMonth);
            break;
        case 8: // ~ else if
            printf("Month number %d is August !!! \n\n", ask_iMonth);
            break;
        case 9: // ~ else if
            printf("Month number %d is September !!! \n\n", ask_iMonth);
            break;
        case 10: // ~ else if
            printf("Month number %d is October !!! \n\n", ask_iMonth);
            break;
        case 11: // ~ else if
            printf("Month number %d is November !!! \n\n", ask_iMonth);
            break;
        case 12: // ~ else if
            printf("Month number %d is December !!! \n\n", ask_iMonth);
            break;
        default: // ~ else
            printf("Invalid month number %d entered !!! Please try again .... \n\n", ask_iMonth);

    }

    printf("Switch case block complete !!! \n");
    return 0;
}