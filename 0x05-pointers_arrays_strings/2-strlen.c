#include "main.h"

/**
 * _strlen - returns string length
 * @s: string to be operated on
 * Return: int
 */
int _strlen(char *s)
{
	int i, j;

	i = 0;
	for (j = 0; s[j] != '\0'; j++)
		i++;

	return (i);
}
