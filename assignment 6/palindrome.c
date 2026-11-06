// Palindrome checker-  Build a cleaned copy of the string, reverse a second copy, and compare them with strcmp.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
    *(message + *n) = '\0';
}

void palindrome_checker(char message[], char msg_copy[], int n)
{
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        *(msg_copy + j) = *(message + i);
    }
    *(msg_copy + n) = '\0';

    if (strcmp(message, msg_copy) == 0)
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
    char msg_copy[100];
    int n = 0;

    printf("Enter a message: ");
    converter(message, &n);
    palindrome_checker(message, msg_copy, n);
    return 0;
}