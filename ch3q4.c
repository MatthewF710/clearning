#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int numConversion()
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    char g1[4], g2[4], g3[5];
    scanf("(%3c) %3c-%4c", g1, g2, g3);
    g1[3] = '\0';
    g2[3] = '\0';
    g3[4] = '\0';
    printf("You entered: %s.%s.%s \n", g1, g2, g3);
    return 0;
}
int main()
{
    numConversion();
    return 0;
}