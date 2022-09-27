#include "main.h"

/**
 * _strspn - function
 * @s: 1st string
 * @accept: 2nd string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i + 1) ; i++)
	{
		k = 1;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
