#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, sum;
	long int next_term1, next_term2;

	i = 1;
	j = 2;
	sum = 0;

	printf("%ld, %ld", i, j);

	for (int k = 2; k < 98; k++)
	{
		next_term1 = i + j;
		next_term2 = next_term1 + j;
		i = next_term1;
		j = next_term2;
		sum += (next_term2 % 2 == 0) ? next_term2 : 0;
		printf(", %ld", next_term1);
	}
	printf("\n");
	printf("Sum of even-valued terms: %ld\n", sum);

	return (0);
}
