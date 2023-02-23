#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1 = 1, num2 = 2, nextTerm = 0, sum = 0;

    while (num1 <= 4000000)
    {
        if (num1 % 2 == 0)
        {
            sum += num1;
        }

        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    printf("%d\n", sum);

    return 0;
}
