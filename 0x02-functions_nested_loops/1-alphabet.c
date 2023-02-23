#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: Prints the letters 'a' through 'z' to stdout
 *              followed by a newline character.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
