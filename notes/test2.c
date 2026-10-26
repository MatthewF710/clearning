#include <stdio.h>

void print_day(int day)
{
    switch (day) // similar to if/else statements except faster. if else statements need to go through a long chain of checks before reaching the final option  in a long if else chain. switch uses jump tables with negative numbers, uses number to find  the address and goes to it instead of comparing values. switch is constant time vs o(n) time, making it more effective when there is a greater number of if/else statements/
    {
    case 1:
        printf("Monday \n");
        break;

    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    }
}
