#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * calculate_coins - Calculate the minimum number of coins required for change
 * @cents: The amount of cents to make change for
 *
 * Return: The minimum number of coins
 */
int calculate_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}

	return (coins);
}

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins;

	if (argc != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	num_coins = calculate_coins(cents);

	printf("%d\n", num_coins);

	return (0);
}
