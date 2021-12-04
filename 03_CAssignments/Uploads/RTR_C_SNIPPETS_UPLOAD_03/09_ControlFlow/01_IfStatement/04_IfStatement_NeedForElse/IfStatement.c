#include<stdio.h>
int main(void)
{
    // variable declarations

    int ask_personAge;

    // code

    printf("\n\n");
    printf("Enter age : ");
    scanf("%d", &ask_personAge);
    if(ask_personAge >= 18)
    {
        printf("You are eligible for voting !!!\n\n");
    }
    printf("You are NOT eligible for voting !!!! \n");
    return 0;
}

