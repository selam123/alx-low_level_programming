#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
