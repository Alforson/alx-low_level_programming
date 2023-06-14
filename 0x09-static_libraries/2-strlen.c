#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to a string.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;

    return (i);
}
