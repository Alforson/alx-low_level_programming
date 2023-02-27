#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Input string
 *
 * Return: Integer converted from input string
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;

    /* Handle leading whitespace */
    while (*s == ' ')
        s++;

    /* Handle sign */
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    /* Convert digits to integer */
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*s - '0');
        s++;
    }

    /* Apply sign */
    num *= sign;

    return num;
}
