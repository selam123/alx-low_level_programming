#include "variadic_functions.h"

/**
 * print_all - prints anything supplied as an argument to the program
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int idx = 0;
	char *string, *separator = "";

	if (format != NULL)
	{
		va_start(ap, format);
		while (format[idx] != '\0')
		{
			switch (format[idx])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				separator = ", ";
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL || *string == '\0')
					string = "(nil)";
				printf("%s%s", separator, string);
				separator = ", ";
				break;
			}
			idx++;
		}
		va_end(ap);
	}
	printf("\n");
}
