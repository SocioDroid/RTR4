#include<stdio.h>

int main(void)
{
    //variable declarations
    int ask_marks;

    // code
    printf("\n\n");

    printf("Enter value for 'ask_marks' : ");
    scanf("%d", &ask_marks);

    if(ask_marks<0)
    {
        printf("Num = %d is less than 0 (NEGATIVE). \n\n", ask_marks);
    }

    if((ask_marks>0) && (ask_marks <=100))
    {
        printf("Num = %d is between 0 and 100. \n\n", ask_marks);
    }

    if((ask_marks>100) && (ask_marks <=200))
    {
        printf("Num = %d is between 100 and 200. \n\n", ask_marks);
    }

    if((ask_marks>200) && (ask_marks <=300))
    {
        printf("Num = %d is between 200 and 300. \n\n", ask_marks);
    }

    if((ask_marks>300) && (ask_marks <= 400))
    {
        printf("Num = %d is between 300 and 400. \n\n", ask_marks);
    }

    if((ask_marks>400) && (ask_marks <= 500))
    {
        printf("Num = %d is between 400 and 500. \n\n", ask_marks);
    }

    if(ask_marks > 500)
    {
        printf("Num = %d is greater than 500. \n\n", ask_marks);
    }

    return 0;
} 
