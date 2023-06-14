#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i, j;

    i = _strlen(dest);
    j = 0;

    while (src[j])
        dest[i++] = src[j++];

    dest[i] = '\0';

    return (dest);
}
