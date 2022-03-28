#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: the string to checked
 * @accept: the string of reference chars
 * Return: an unsigned int indicating how many chars in s matched those in
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int idxa, idxs, count, countref;

	count = 0;
	idxa = 0;
	idxs = 0;

	while (s[idxs] != '\0')
	{
		countref = count;
		idxa = 0;
		while (accept[idxa] != '\0')
		{
			if (s[idxs] == accept[idxa])
			{
				count = count + 1;
				break;
			}
			idxa++;
		}
		if (countref == count)
			return (count);
		idxs++;
	}
	return (count);
}
