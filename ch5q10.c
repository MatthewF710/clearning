#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void grade_conversion(int tens, int ones, char result[])
{
    switch (tens)
    {
    case 10:
        if (ones == 0)
        {
            strcpy(result, "A");
            return;
        }
        else
        {
            break;
        }
    case 9:
        strcpy(result, "A");
        return;
    case 8:
        strcpy(result, "B");
        return;
    case 7:
        strcpy(result, "C");
        return;
    case 6:
        strcpy(result, "D");
        return;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        strcpy(result, "F");
        return;
    }
    strcpy(result, "Error: invalid grade input");
    return;
}
int main()
{
    int grade, tens, ones;
    char result[40];
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    tens = grade / 10;
    ones = grade % 10;
    grade_conversion(tens, ones, result);
    printf("Letter grade: %s \n", result);
}