#include "main.h"

/**
 * _strpbrk - locates first occurrence
 * @s: string where search is made
 * @accept: where searched bytes are located
 *
 * Return: Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
