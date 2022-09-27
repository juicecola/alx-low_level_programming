#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence in s else void
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
