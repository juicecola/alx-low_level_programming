#include "main.h"

/**
 * _strpbrk - function that saerch a string for any of a set of byte
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the byte in `accept`
 * or NULL if no byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
