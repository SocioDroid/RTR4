#include<stdio.h>

#define MY_PI 3.1415926535897932

#define ASK_STRING "AstroMedoComp RTR"


// Un-Named Enums

enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

enum
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// Named Enums
enum
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE = 5,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN
};

enum 
{
    TRUE = 1,
    FALSE = 0
};

int main(void)
{
    // local ocnstant declarations
    const double epsilon = 0.00001;

    //code
    printf("\n\n");
    printf("Local constant Epsilon = %lf\n\n", epsilon);

    printf("Sunday is Day Number = %d\n", SUNDAY);
    printf("Monday is Day Number = %d\n", MONDAY);
    printf("Tuesday is Day Number = %d\n", TUESDAY);
    printf("Wednesday is Day Number = %d\n", WEDNESDAY);
    printf("Thursday is Day Number = %d\n", THURSDAY);
    printf("Friday is Day Number = %d\n", FRIDAY);
    printf("Saturday is Day Number = %d\n\n", SATURDAY);

    printf("One is enum number = %d\n", ONE);
    printf("Two is enum number = %d\n", TWO);
    printf("Three is enum number = %d\n", THREE);
    printf("Four is enum number = %d\n", FOUR);
    printf("Five is enum number = %d\n", FIVE);
    printf("Six is enum number = %d\n", SIX);
    printf("Seven is enum number = %d\n", SEVEN);
    printf("Eight is enum number = %d\n", EIGHT);
    printf("Nine is enum number = %d\n", NINE);
    printf("Ten is enum number = %d\n\n", TEN);

    printf("January is Month Number = %d\n", JANUARY);
    printf("February is Month Number = %d\n", FEBRUARY);
    printf("March is Month Number = %d\n", MARCH);
    printf("April is Month Number = %d\n", APRIL);
    printf("May is Month Number = %d\n", MAY);
    printf("June is Month Number = %d\n", JUNE);
    printf("July is Month Number = %d\n", JULY);
    printf("August is Month Number = %d\n", AUGUST);
    printf("September is Month Number = %d\n", SEPTEMBER);
    printf("October is Month Number = %d\n", OCTOBER);
    printf("November is Month Number = %d\n", NOVEMBER);
    printf("December is Month Number = %d\n\n", DECEMBER);

    printf("Value of TRUE is = %d\n", TRUE);
    printf("Value of FALSE is = %d\n", FALSE);

    printf("MY_PI macro value = %.10lf\n\n", MY_PI);
    printf("Area of Circle of Radius 2 units = %f\n\n", (MY_PI * 2.0f * 2.0f));

    printf("\n\n");
    printf(ASK_STRING);
    printf("\n\n");

    return 0;
}