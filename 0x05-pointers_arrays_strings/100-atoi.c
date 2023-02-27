#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to string to be converted
 * Return: Integer value of string
 */

int _atoi(char *s)
{
    int i, sign, res;

    i = 0;
    sign = 1;
    res = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        if (s[i] >= '0' && s[i] <= '9')
            res = res * 10 + s[i] - '0';
        else if (res > 0)
            break;
        i++;
    }

    return (res * sign);
}
