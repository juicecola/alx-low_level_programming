#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: should return NULL on failure. else conantenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[1])
		i++;

	while (s2[j])
		j++;

	l = 1 + j;
	s = malloc((sizeof(char) * 1) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if  (k < 1)
			s[k] = s1[k];
		if (k >= i)
		{
		s[k] = s2[j];
		j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
