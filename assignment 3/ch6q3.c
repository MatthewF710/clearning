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
void simplify_fraction(int int1, int int2, int gcd)
{
    int num, denom;
    num = int1 / gcd;
    denom = int2 / gcd;
    printf("In lowest terms: %d/%d \n", num, denom);
    return;
}
int main()
{
    int num, denom, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    gcd = gcd_algorithm(num, denom);
    simplify_fraction(num, denom, gcd);
    return 0;
}