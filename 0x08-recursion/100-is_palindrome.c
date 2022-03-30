#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to the string in question
 * Return: length of string as int
 */
int _strlen_recursion(char *s)
{
	/* early return example from Jon */
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * char_match - matches the chars at the beginning and end of a string,
 * recursively moving inward on the string toward the middle
 * @s: a pointer to the start of the string in question
 * @e: a pointer to the end of the string in question
 * @hl: half of the length of the string
 * Return: 1 if all chars match, 0 if not
 */
int char_match(char *s, char *e, int hl)
{
	if (*s != *e)
		return (0);
	if (*s == *e && hl <= 0)
		return (1);
	return (char_match(s + 1, e - 1, hl - 1));
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: a pointer to the string in question
 * Return: 1 for a palindrome, or 0
 */
int is_palindrome(char *s)
{
	int length;
	char *e;

	if (*s == '\0')
		return (0);
	length = _strlen_recursion(s);
	e = (s + length - 1);
	return (char_match(s, e, length / 2));
}
