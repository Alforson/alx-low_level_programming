#include "main.h"

/**
 * print_line - draws a straight line of n underscores in the terminal
 * @n: number of times to print the underscore character
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
