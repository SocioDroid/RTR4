#include<stdio.h>
int main(void)
{
    // variable
    int ask_personAge;

    //code
    printf("\n\n");
    printf("Enter age : ");
    scanf("%d", &ask_personAge);
    printf("\n\n");
    
    if (ask_personAge >= 18)
    {
        printf("Entering if-block ... \n\n");
        printf("You are eligible for Voting!!! \n\n");
    }
    else{
        printf("Entering else-blovk .... \n\n");
        printf("You are not eligible for  voting !! \n\n");;
    }

    printf("Byeee !!! \n\n");
    return 0;
}
