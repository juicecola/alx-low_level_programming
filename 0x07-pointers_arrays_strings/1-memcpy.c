#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: bytes
 * @src: origin memory area
 * @dest: destination memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
