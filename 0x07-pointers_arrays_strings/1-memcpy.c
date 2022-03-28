#include "main.h"

/**
 * _memcpy - copies n bytes from one memery area to another
 * @dest: pointer to the destination for n bytes of src
 * @src: pointer to the bytes to be copied
 * @n: numberof bytes of src to be copied
 * Return: pointer (dest) to the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}
