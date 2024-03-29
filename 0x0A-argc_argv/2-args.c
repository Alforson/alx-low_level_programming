#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
	}

	return (0);
}
