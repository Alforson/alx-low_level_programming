#include "main.h"

/**
 * print_number - prints an integer
 * @num: integer to be printed
 *
 * Description: This function prints an integer using only _putchar
 */
void print_number(int num)
{
    int digits[10];
    int i = 0, divisor = 1;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
    }

    while (num / divisor > 9)
        divisor *= 10;

    while (divisor != 0)
    {
        digits[i] = num / divisor;
        num %= divisor;
        divisor /= 10;
        i++;
    }

    for (i = 0; i < 10 && digits[i] != 0; i++)
        _putchar(digits[i] + '0');
    if (i == 0)
        _putchar('0');
}
