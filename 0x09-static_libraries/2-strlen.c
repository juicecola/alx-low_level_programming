#include "main.h"

/**
 * _strlen - returns string length
 * @s: string to be operated on
 * Return: int
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
