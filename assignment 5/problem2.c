#include <stdio.h>
#include <stdlib.h>

void minMax(int *arr, int n, int *min, int *max)
{
    *min = *arr;
    *max = *arr;
    for (int i = 1; i <= n; i++)
    {
        int current_element = *(arr + i);
        if (current_element < *min)
        {
            *min = current_element;
        }
        if (current_element > *max)
        {
            *max = current_element;
        }
    }
}

int main(void)
{
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;
    minMax(data, 5, &lo, &hi);
    printf("min = %d, max = %d\n", lo, hi);
    return 0;
}