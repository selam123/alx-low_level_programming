#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters passed and returns the sum
 * @n: the number of additional parameters passed
 * Return: the sum of the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, unsigned int);
		i++;
	}
	va_end(ap);

	return (sum);
}
