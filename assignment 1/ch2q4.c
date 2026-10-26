#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAX_RATE 0.05f

float calculate_price(float price)
{
    float totalCost = price + (price * TAX_RATE);
    return totalCost;
}
int main()
{
    float price;
    printf("Enter an amount: ");
    scanf("%f", &price);
    float total = calculate_price(price);
    printf("With taxed added: $%.2f \n", total);
    return 0;
}