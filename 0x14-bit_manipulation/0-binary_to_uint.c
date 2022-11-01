#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: the converted number
 * r 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base2;

	if (!b)
		return (0);
	i = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += base2;
		}
	}
	return (i);
}

