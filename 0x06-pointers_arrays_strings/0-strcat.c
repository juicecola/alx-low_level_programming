#include "main.h"

/**
 * _strcat - main function
 * description: appends the src string to the dest string
 * @dest: string to appended
 * @src: string to append
 * Return: 0 on success
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
