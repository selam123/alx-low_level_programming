#include "main.h"

/**
 * prime_check - divide n by y (incremented recursively) to determine if n
 * is a prime number
 * @y: an incrementing natural number
 * @n: the integer in question
 * Return: 1 for prime or 0 otherwise
 */
int prime_check(int y, int n)
{
	if (y >= n)
		return (0);
	if (n % y == 0)
		return (0);
	if (y + 1 == n)
		return (1);
	return (prime_check(y + 1, n));
}

/**
 * is_prime_number - checks whether an integer is a prime number
 * @n: the number to be investigated
 * Return: 1 for prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (prime_check(2, n));
}
