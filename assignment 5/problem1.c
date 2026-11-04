#include <stdlib.h>
#include <stdio.h>

int swap(int *x, int *y)
{
    int filler;
    filler = *x;
    *x = *y;
    *y = filler;
    return 0;
}

int main(void)
{
    int x = 3, y = 9;
    printf("Before: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("After: x=%d y=%d\n", x, y);
    return 0;
}