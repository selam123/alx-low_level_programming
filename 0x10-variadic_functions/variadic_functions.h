#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct data - struct data
 * @c: pointer to string with data type identifier
 * @d: pointer to stringw ith data type name
 */
typedef struct data
{
	char *c;
	char *d;
} data;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */
