#include "variadic_functions.h"

/**
 * print_strings - prints strings supplied as arguments, separated
 * by the string at separator
 * @separator: pointer to the string to print between arguments
 * @n: the number of arguments passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	i = 0;

	while (i < n)
	{
		string = va_arg(ap, char *);

		if (i < (n - 1) && separator != NULL)
		{
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			printf("%s", separator);
		}

		else
		{
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
