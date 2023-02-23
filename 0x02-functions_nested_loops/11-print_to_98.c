#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by a comma
 *               and space, followed by a new line
 * @n: The starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}
