#include "main.h"

/**
 * print_string - prints a string to stdout, followed by a new line.
 *
 * @s: pointer to a string.
 *
 * Return: void.
 */

void print_string(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
	}

	_putchar('\n');
}
