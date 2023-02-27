#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    unsigned int res = 0;
    int sign = 1;

    while (*s)
    {
        if (*s == '-')
            sign = -sign;

        if (*s >= '0' && *s <= '9')
            res = res * 10 + (*s - '0');

        if (*s == ';')
            break;

        s++;
    }

    return (sign * res);
}
