#include <stdlib.h>

/**
 * _wordCount - counts the number of words in a string
 * @s: pointer to the string to be counted
 * @n: the count
 * Return:  int with number of words
 */
int _wordCount(char *s, int n)
{
	s = s + 1;
	while (*s != '\0')
	{
		if (*(s - 1) == ' ' && *s != ' ')
			n = n + 1;
		s = s + 1;
	}
	return (n);
}

/**
 * _wordStart - finds the position of each new word in a string
 * @s: a pointer to the string
 * Return: 0 if the string is empty or the length of the string
 */
char *_wordStart(char *s)
{
	if (*s == '\0')
		return (NULL);
	while (*s == ' ' || (*(s - 1) != ' '))
		s++;
	return (s);
}

/**
 * _strlen - finds the length of a string
 * @s: a pointer to the string
 * Return: 0 if the string is empty or the length of the string
 */
int _strlen(char *s)
{
	if (*s == ' ' || *s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - copies src onto the end of dest, overwriting the null byte
 * in dest and adding a new one after copy completion
 * @dest: the string to be amended
 * @src: the source string to be copied
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx] != ' ' && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/**
 * strtow - splits a string into words as a 2d array
 * @str: the string to be split
 * Return: a **ptr to the 2 day array or null if failed
 */
char **strtow(char *str)
{
	char **new;
	int idx1 = 0, wordLength, numWords = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (*str != ' ')
		numWords = 1;
	numWords = _wordCount(str, numWords);
	new = malloc(sizeof(new) * numWords);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (idx1 < numWords)
	{
		if (str[0] != ' ')
		{
			wordLength = _strlen(str) + 1;
		}
		else
		{
			str = _wordStart(str);
			wordLength = _strlen(str) + 1;
		}
		new[idx1] = malloc(sizeof(char) * wordLength);
		if (new[idx1] == NULL)
		{
			free(new[idx1]);
			return (NULL);
		}
		str = _wordStart(str);
		new[idx1] = _strcpy(new[idx1], str);
		idx1++;
		str++;
	}
	return (new);
}
