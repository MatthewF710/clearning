#include <stdio.h>
#include <stdlib.h>

int contents[101]; // 100 is max stack size
int top = 0;
int error = 0;

int push(int num)
{
    if (top == 100)
    {
        printf("Expression is too complex \n");
        error = 1;
        return 0;
    }
    contents[top] = num;
    top = top + 1;
    return 1;
}

int pop()
{
    if (top == 0)
    {
        printf("Not enough operands \n");
        error = 1;
        return 0;
    }
    top = top - 1;
    return contents[top];
}

int main()
{
    char ch;
    int num1, num2, result;

    while (1)
    {
        printf("Enter an RPN expression: ");
        scanf(" %c", &ch);
        error = 0;

        while (ch != '=' && error == 0)
        {
            if (ch >= '0' && ch <= '9')
            {
                push(ch - '0'); // formatting
            }
            else
            {
                switch (ch)
                {
                case '+':
                    num2 = pop();
                    if (error == 0)
                    {
                        num1 = pop();
                    }
                    if (error == 0)
                    {
                        push(num1 + num2);
                    }
                    break;
                case '-':
                    num2 = pop();
                    if (error == 0)
                    {
                        num1 = pop();
                    }
                    if (error == 0)
                    {
                        push(num1 - num2);
                    }
                    break;

                case '*':
                    num2 = pop();
                    if (error == 0)
                    {
                        num1 = pop();
                    }
                    if (error == 0)
                    {
                        push(num1 * num2);
                    }
                    break;

                case '/':
                    num2 = pop();
                    if (error == 0)
                    {
                        num1 = pop();
                    }
                    if (error == 0)
                    {
                        push(num1 / num2);
                    }
                    break;
                }
            }
            if (error == 0)
            {
                scanf(" %c", &ch);
            }
        }
        if (error == 0)
        {
            result = pop();
            if (error == 0)
            {
                printf("Value of expression: %d \n", result);
            }
        }
        else
        {
            printf("An error occured in your expression. Please retry. \n");
        }
        top = 0;
    }
    return 0;
}