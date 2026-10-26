#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd_algorithm(int int1, int int2)
{
    int larger, smaller, quotient, remainder;
    if (int1 > int2)
    {
        larger = int1;
        smaller = int2;
    }
    else
    {
        larger = int2;
        smaller = int1;
    }
    while (1)
    {
        quotient = larger / smaller;

        if (larger % smaller == 0)
        {
            break;
        }

        remainder = larger % smaller;
        larger = smaller;
        smaller = remainder;
    }

    return smaller;
}
int main()
{
    int int1, int2;
    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);
    printf("Greatest common divisor: %d \n", gcd_algorithm(int1, int2));
    return 0;
}