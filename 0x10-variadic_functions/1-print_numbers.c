#include "variadic_functions.h"

/**
 * print_numbers - prints numbers provided as arguments to standard output
 * separated by the string at separator
 * @separator: the string to print between numbers
 * @n: the number of arguments passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		if (i != 0 && separator != NULL)
			printf("%s%d", separator, va_arg(ap, unsigned int));
		else
			printf("%d", va_arg(ap, unsigned int));
		i++;
	}
	printf("\n");
}
