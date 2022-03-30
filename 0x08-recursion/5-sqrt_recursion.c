#include "main.h"

/**
 * _increment - tests if the y * y is equal to n
 * @y: an incrementing natural number
 * @n: the squared number, to test against
 * Return: num + 1 as an integer
 */
int _increment(int y, int n)
{
	if (y >= (n / 2))
		return (-1);
	if (y * y == n)
		return (y);
	return (_increment(y + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be investigated
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (_increment(1, n));
}
