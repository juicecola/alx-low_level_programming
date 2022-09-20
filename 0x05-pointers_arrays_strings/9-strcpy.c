#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - main function.
 * @src: The source.
 * @dest: The destination
 *
 * description: function copies the string pointed to by src
 * the terminating null byte (\0), to the buffer pointed to by destionation
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
