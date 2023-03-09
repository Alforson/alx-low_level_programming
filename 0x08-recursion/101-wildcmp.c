#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 *           identical, otherwise return 0.
 * @s1: The first string to compare
 * @s2: The second string to compare. This string can contain the special
 *      character * which can replace any string (including an empty string).
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
        /* Base case */
        if (*s1 == '\0' && *s2 == '\0')
                return (1);

        /* Recursive case */
        if (*s2 == '*')
                return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
        if (*s1 != *s2)
                return (0);

        return (wildcmp(s1 + 1, s2 + 1));
}
