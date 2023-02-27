#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 */

void rev_string(char *s)
{
    int len = 0, i = 0, j = 0;
    char temp;

    while (s[len] != '\0')
        len++;

    j = len - 1;

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
}
