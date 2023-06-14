#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = _strlen(dest);
    j = 0;

    while (src[j] && j < n)
        dest[i++] = src[j++];

    dest[i] = '\0';

    return (dest);
}
