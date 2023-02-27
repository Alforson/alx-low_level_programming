#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 *
 * @s: pointer to a string.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		len = _strlen(s);

		while (len > 0)
		{
			len--;
			_putchar(*(s + len));
		}
	}

	_putchar('\n');
}
