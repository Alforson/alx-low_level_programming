#include "main.h"

/**
 * string_length - returns the length of a string.
 *
 * @s: pointer to a string.
 *
 * Return: length of string.
 */

int string_length(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}
