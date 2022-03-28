#include "main.h"

/**
 * match_found - checks to see if the chars at a specific point in two
 * strings are identical.
 * @h: pointer to the first string
 * @n: pointer to the second string
 * Return: integer 1 for a match or 0 for no match
 */
int match_found(char *h, char *n)
{
	if (*h == *n)
		return (1);
	else
		return (0);
}

/**
 * _strstr - finds the first occurrence of the substring needle in the
 * string haystack (not comparing terminating null bytes)
 * @haystack: the string to be searched
 * @needle: the substring to be found
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n, h, hold, match;

	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		match = 1;
		hold = h;
		while (match == 1 && needle[n] != '\0')
		{
			match = match_found((haystack + hold), (needle + n));
			if (needle[n + 1] == '\0' && match == 1)
			{
				if (*needle == haystack[h])
					return (haystack + h);
			}
			n++;
			hold++;
		}
		h++;
	}
	if (needle[0] == '\0')
		return (haystack);
	return ('\0');
}
