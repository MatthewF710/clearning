#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenty_count, int *ten_count, int *five_count, int *one_count)
{
    *twenty_count = dollars / 20;
    dollars = dollars % 20;
    *ten_count = dollars / 10;
    dollars = dollars % 10;
    *five_count = dollars / 5;
    dollars = dollars % 5;
    *one_count = dollars;
}

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d \n", twenties);
    printf("$10 bills: %d \n", tens);
    printf("$5 bills: %d \n", fives);
    printf("$1 bills: %d \n", ones);
    return 0;
}