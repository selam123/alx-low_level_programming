#include "main.h"

/**
 * _strpbrk - locates the first occurrence in a string of any bytes
 * in a reference string
 * @s: pointer to the string to be searched
 * @accept: pointer to the reference string
 * Return: pointer s at address of first match or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int idxs, idxa;

	idxs = 0;
	while (s[idxs] != '\0')
	{
		idxa = 0;
		while (accept[idxa] != '\0')
		{
			if (s[idxs] == accept[idxa])
				return (s + idxs);
			idxa++;
		}
		idxs++;
	}
	return ('\0');
}
