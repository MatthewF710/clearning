#include <stdlib.h>
#include <stdio.h>

void reverseArray(int *array, int n)
{
    int filler;
    for (int i = 0, j = n - 1; j >= i; i++, j--)
    {
        filler = *(array + j);
        *(array + j) = *(array + i);
        *(array + i) = filler;
    }
}
int main(void)
{
    int data[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(data, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}