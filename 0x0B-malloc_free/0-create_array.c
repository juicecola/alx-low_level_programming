#include "main.h"

/**
 * create_array - create an array of chars and initialize  with a specific char
 * @size: size aof array
 * @c: specific char
 * Return: on success pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *k = malloc(size);
	if (size == 0 || k == 0)
		return (0);
	while (size--)
		k[size] = c;
	return (k);
}
