#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int count = 0;

	while (argv[count])
		count++;

	_putchar(count + '0');
	_putchar('\n');

	return (0);
}
