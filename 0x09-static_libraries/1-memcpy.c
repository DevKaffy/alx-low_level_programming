#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: string array.
 * @src: constant byte.
 * @n: number of bytes.
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
