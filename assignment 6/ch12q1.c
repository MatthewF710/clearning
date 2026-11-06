#include <stdio.h>
#include <stdlib.h>

void reversal(char *message)
{
    char ch;
    char *p = message;

    while ((ch = getchar()) != '\n')
    {
        *p = ch;
        p++;
    }
    printf("Reversal is: ");
    while (p >= message)
    {
        putchar(*p);
        p--;
    }
}

int main(void)
{
    char message[100];

    printf("Enter a message: ");
    reversal(message);
    return 0;
}