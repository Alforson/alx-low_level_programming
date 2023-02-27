#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer to a string.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len = 0;
	char tmp;
	int i;

	if (s != NULL)
	{
		len = _strlen(s);

		for (i = 0; i < len / 2; i++)
		{
			tmp = *(s + i);
			*(s + i) = *(s + len - i - 1);
			*(s + len - i - 1) = tmp;
		}
	}
}
