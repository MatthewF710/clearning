#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float multiply_self(float num, float repititions)
{
    float rMultiplied = num;
    for (int i = 1; i < repititions; i++)
    {
        rMultiplied = rMultiplied * num;
    }
    return rMultiplied;
}
float polynomial_calc(float num)
{
    float total_calc = (3 * (multiply_self(num, 5))) + (2 * (multiply_self(num, 4))) - (5 * (multiply_self(num, 3))) - (1 * (multiply_self(num, 2))) + (7 * num) - 6;
    printf("Answer: %f", total_calc);
    return total_calc;
}
int main()
{
    float num;
    printf("Enter a value for x: ");
    scanf("%f", &num);
    printf("Answer: %.2f \n", polynomial_calc(num));
    return 0;
}