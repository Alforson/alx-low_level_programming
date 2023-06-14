#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
    int count = 0;

    while (argc--)
    {
        count++;
    }

    printf("%d\n", count - 1);

    return (0);
}
