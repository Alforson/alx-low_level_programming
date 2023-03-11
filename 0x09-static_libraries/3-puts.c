#include "main.h"

void _puts(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        _putchar(s[i]);

    _putchar('\n');
}
