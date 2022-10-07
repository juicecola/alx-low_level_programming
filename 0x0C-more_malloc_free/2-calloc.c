#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: number of elements
 * @size: size of the memory block
 * Return: pointer to the adress of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
		if (m != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			m[i] = 0;
		return (m);
	}
		else
			return (NULL);

}
