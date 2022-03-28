#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of a particular char in a
 * string
 * @s: a pointer to the string to be examined
 * @c: the char searched for in the string at s
 * Return: the place in the string a match is found or NULL if no match found
 */
char *_strchr(char *s, char c)
{
	int idx;

	idx = 0;
	while (s[idx]  != '\0')
	{
		if (s[idx] == c)
		{
			s = s + idx;
			return (s);
		}
		idx++;
	}
	if (c == '\0')
		return (s + idx);
	return (0);
}
