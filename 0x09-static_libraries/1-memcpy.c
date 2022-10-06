#include "main.h"

/**
 * _memcpy - copies n bytes from
 * src to dest
 * @dest: where bytes are copied to
 * @src: where bytes are copied from
 * @n: number of bytes to copy
 *
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
