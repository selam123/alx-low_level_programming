#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: source code
 *
 * Description: if s = "Corbin Coleman"
 * stdout = 14
 *
 * Return: 1 + _strlen_recursion(s + 1) to continue count
 * 0 when counting finish.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else

	{
		return (1 + _strlen_recursion(s + 1));
	}
}
