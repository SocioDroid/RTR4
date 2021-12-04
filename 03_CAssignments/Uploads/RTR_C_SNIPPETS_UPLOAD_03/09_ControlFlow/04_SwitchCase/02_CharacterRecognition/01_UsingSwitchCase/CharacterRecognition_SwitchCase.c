#include <stdio.h> // printf()
#include <conio.h> // getch()

// ASCII Values for 'A' to 'Z' ==> 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Values for 'a' to 'z' ==> 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII Values for '0' to '9' ==>> 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
    // variable declarations
    char ask_ch;
    int ask_ch_value;

    //code
    printf("\n\n");

    printf("Enter Character : ");
    ask_ch = getch();

    printf("\n\n");

    switch(ask_ch)
    {
        // Fall through condition
        case 'A':
        case 'a':

        case 'E':
        case 'e':

        case 'I':
        case 'i':

        case 'O':
        case 'o':

        case 'U':
        case 'u':
            printf("Character \'%c\' entered by you, is a vowel character from the english alphabets !!! \n\n", ask_ch);
            break;
        default:
            ask_ch_value = (int)ask_ch;

            // If the character has ASCII value between 65 and 90 OR between 97 and 122, it is still a letter of the alphabet, but it is a consonant, and not a vowel ...

            if((ask_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ask_ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ask_ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ask_ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
            {
                printf("Character \'%c\' entered by you, is a consonant character from the English Alphabets !!! \n\n", ask_ch);   
            }
            else if(ask_ch_value >= CHAR_DIGIT_BEGINNING && ask_ch_value <= CHAR_DIGIT_ENDING)
            {
                printf("Character \'%c\' entered by you, is a digit character!!! \n\n", ask_ch);
            }
            else
            {
                printf("Character \'%c\' entered by you, is a special character!!! \n\n", ask_ch);
            }
            break;
    }

    printf("Switch case block complete !!! \n");
    return 0;
}
