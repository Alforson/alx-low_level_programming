#include "main.h"

int _atoi(char *s)
{
    int i, n, sign;

    n = 0;
    sign = 1;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == '-')
            sign *= -1;

        if (s[i] >= '0' && s[i] <= '9')
            n = n * 10 + (s[i] - '0');

        if (n > 0 && !(s[i] >= '0' && s[i] <= '9'))
            break;
    }

    return (n * sign);
}
