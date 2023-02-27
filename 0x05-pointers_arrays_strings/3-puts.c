#include "main.h"

/**
 * _puts - prints a string to stdout.
 *
 * @str: pointer to a string.
 *
 * Return: void.
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
}
