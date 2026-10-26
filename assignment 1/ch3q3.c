#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// did this one in a different way from question 4 because i found out there was a way easier way to do it after
int convertISBN(char ISBN[])
{
    int group = 1;
    int pos = 0;
    char GS1_prefix[50] = "";
    char group_identifier[50] = "";
    char publisher_code[50] = "";
    char item_num[50] = "";
    char check_digit[50] = "";
    for (int i = 0; i < strlen(ISBN); i++)
    {
        if (ISBN[i] == '-')
        {
            group++;
            pos = 0;
            continue;
        }
        if (group == 1)
        {
            GS1_prefix[pos] = ISBN[i];
        }
        if (group == 2)
        {
            group_identifier[pos] = ISBN[i];
        }
        if (group == 3)
        {
            publisher_code[pos] = ISBN[i];
        }
        if (group == 4)
        {
            item_num[pos] = ISBN[i];
        }
        if (group == 5)
        {
            check_digit[pos] = ISBN[i];
        }
        pos++;
    }
    printf("GS1 Prefix: %s \n", GS1_prefix);
    printf("Group identifier: %s \n", group_identifier);
    printf("Publisher code: %s \n", publisher_code);
    printf("Item number: %s \n", item_num);
    printf("Check digit: %s \n", check_digit);
    return 0;
}

int main()
{
    char ISBN[50];
    printf("Enter ISBN: ");
    scanf("%49s", ISBN);
    convertISBN(ISBN);
}