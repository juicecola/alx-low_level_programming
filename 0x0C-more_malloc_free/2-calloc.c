#include "main.h"

/**
 * _memeset - fill memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @ size: elements of size bytes
 * Return: Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == 0)
		return (NULL);
	_memset(m, 0, nmemb * size);

	return (m);

}
