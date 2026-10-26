#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void conversion(char number[])
{
    char ch;
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '1':
            number[i] = putchar('1');
            break;
        case '0':
            number[i] = putchar('0');
            break;
        case 'A':
        case 'B':
        case 'C':
        case '2':
            number[i] = putchar('2');
            break;

        case 'D':
        case 'E':
        case 'F':
        case '3':
            number[i] = putchar('3');
            break;

        case 'G':
        case 'H':
        case 'I':
        case '4':
            number[i] = putchar('4');
            break;

        case 'J':
        case 'K':
        case 'L':
        case '5':
            number[i] = putchar('5');
            break;

        case 'M':
        case 'N':
        case 'O':
        case '6':
            number[i] = putchar('6');
            break;

        case 'P':
        case 'R':
        case 'S':
        case '7':
            number[i] = putchar('7');
            break;

        case 'T':
        case 'U':
        case 'V':
        case '8':
            number[i] = putchar('8');
            break;

        case 'W':
        case 'X':
        case 'Y':
        case '9':
            number[i] = putchar('9');
            break;
        case '-':
            number[i] = putchar('-');
            break;
        }
    }
    number[i] = '\0';
}

int main()
{
    char phone_number[20];

    printf("Enter a phone number: ");
    conversion(phone_number);
    printf("%s\n", phone_number);

    return 0;
}