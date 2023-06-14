#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int count = argc - 1;

	_putchar(count + '0');
	_putchar('\n');

	return (0);
}
