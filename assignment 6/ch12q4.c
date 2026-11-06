#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void converter(char message[], int *n)
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z'))
        { // avoids all non letter characters
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = tolower(ch);
            }
            *(message + *n) = ch;
            (*n)++;
        }
    }
}

void palindrome_checker(char message[], int n)
{
    int truefalse = 1;
    for (int i = 0, j = n - 1; j >= i; i++, j--)
    {
        if (*(message + i) != *(message + j))
        {
            truefalse = 0;
        }
    }
    if (truefalse == 1)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not a palindrome \n");
    }
}

int main(void)
{
    char message[100];
    int n = 0;

    printf("Enter a message: ");
    converter(message, &n);
    palindrome_checker(message, n);
    return 0;
}