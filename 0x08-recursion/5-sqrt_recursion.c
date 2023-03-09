#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    return sqrt_recursive(n, 1, n);
}

/**
 * sqrt_recursive - finds the natural square root of a number
 * @n: the number to find the square root of
 * @start: the start of the range to search for the square root in
 * @end: the end of the range to search for the square root in
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int sqrt_recursive(int n, int start, int end)
{
    int mid = (start + end) / 2;
    int square = mid * mid;

    if (square == n)
        return mid;
    if (end < start)
        return -1;
    if (square < n)
        return sqrt_recursive(n, mid + 1, end);
    return sqrt_recursive(n, start, mid - 1);
}
