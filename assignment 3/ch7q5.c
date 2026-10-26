#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int value_adder()
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            i = i + 1;
            break;
        case 'D':
        case 'G':
            i = i + 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            i = i + 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            i = i + 4;
            break;
        case 'K':
            i = i + 5;
            break;
        case 'J':
        case 'X':
            i = i + 8;
            break;
        case 'Q':
        case 'Z':
            i = i + 10;
            break;
        }
    }
    return i;
}

int main()
{
    printf("Enter a word: ");
    printf("Scrabble value: %d \n", value_adder());
    return 0;
}